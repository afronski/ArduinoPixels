//
//  PixelMain_Game_vs.cpp
//  PixelGameLocal
//
//  Created by Kris Temmerman on 28/10/13.
//
//

#include "PixelMain.h"

void PixelMain::setupGameVS()
{
   
        DecorSprite * city = &_citiesVS[0];
        city ->currentData =cityData;
        
        city->fx = city->fxReal = 30;
        
        city->fy =7;
        city->depth =0.2;
        
        decorVS.push_back(city);
   
    int posTreeFar [3] = { 16,25, 77 };
    for(int i=0;i<3;i++)
    {
        DecorSprite * treeFar = &_farTreesVS[i];
        treeFar ->currentData =treeFarData;
        treeFar ->fx  =treeFar ->fxReal =  posTreeFar[i] ;
        int rPos = -rand()%2;
        treeFar ->fy = -rand()%2+treeFarData->height();
        treeFar ->depth=0.3;
        if( rPos ==-1) treeFar ->depth=0.4;
        
        
        decorVS.push_back(treeFar );
    }
    
   
        DecorSprite * treeClose = &_closeTreesVS[0];
        
        treeClose->currentData =treeCloseData;
        treeClose->fx = treeClose->fxReal = 50;
 
        treeClose->fy =13;
        treeClose->depth =1;
       
       
        
        decorVS.push_back(treeClose );
    
    
    
    DecorSprite * bush = &_bushesVS[0];
    
    bush->currentData =bushData;
    bush->fx = bush->fxReal = 35;
   
    bush->fy = 13;
    bush->depth =1;
  

    
    decorVS.push_back(bush);
    int posFlower[6] = { 12,28, 77,55,23,45};
    
   
    for(int i=0;i<6;i++)
    {
        DecorSprite * flower = &_flowersVS[i];
        flower ->currentData =flowerData;
        
        flower->fx = posFlower[i];
        flower->fxReal = posFlower[i];
        int rPos = -rand()%4;
        flower->fy = rPos+15;
        flower->depth =1;
        if( rPos ==-2)  flower->depth=0.98;
        if( rPos ==-3)  flower->depth=0.95;
        
        
        decorVS.push_back( flower);
    }
    bool sorted =false;
    while(!sorted){
        sorted  =true;
        for (size_t i=0;i<   decorVS.size()-1;i++)
        {
            if(decorVS[i]->depth >decorVS[i+1]->depth)
            {
                DecorSprite *temp = decorVS[i];
                decorVS[i] = decorVS[i+1];
                decorVS[i+1] = temp;
                sorted  =false ;
            }
        }
    }
    for (size_t i=0;i<   decorVS.size();i++)
    {
        stageVS.addChild( decorVS[i]);
        
    }
    
    for (int i=0;i<6;i++)
    {
        SpecialAttack *attack = &_specialAttacks[i];

        attack->setup();
        specialAttackBufferVS.push_back(attack);
        stageVS.addChild( attack);
    }
    
    
    
    ///hero
    heroVSM =new Hero();
    //setHeroData(heroVSM,0);
    stageVS.addChild(heroVSM);
    heroVSM->setup(0);
liveVS.push_back( heroVSM);
    
    heroVSF =new Hero();
    //setHeroData(heroVSF,1);
    stageVS.addChild(heroVSF);
    heroVSF->setup(1);
    liveVS.push_back( heroVSF);
    
    //life stuff
    
    lifeBoyHolderVS= new Sprite();
    stageVS.addChild(lifeBoyHolderVS);
    lifeBoyHolderVS->currentData = &boyInterData;
    lifeGirlHolderVS= new Sprite();
    stageVS.addChild(lifeGirlHolderVS);
    lifeGirlHolderVS->currentData = &girlInterData;
    lifeBoyVS.setup();
    lifeGirlVS.setup();
    lifeGirlVS.fx =1;
    lifeGirlVS.fy=-2;
    lifeBoyVS.fx =0;
    lifeBoyVS.fy=-2;
    lifeBoyHolderVS->addChild(&lifeBoyVS);
    lifeGirlHolderVS->addChild(&lifeGirlVS);

    gameOverText.fy = 0;
    gameOverText.fx = 0;
    stageVS.addChild(&gameOverText);
    
    
    
}

void PixelMain::resetGameVS()
{
    lifeBoyHolderVS->fx =-15;
    lifeBoyHolderVS->fy =16;
    lifeGirlHolderVS->fx =104;
    lifeGirlHolderVS->fy =16;
    lifeGirlVS.reset();
    lifeBoyVS.reset();
    
    
   
    lifeBoyHolder1p->fx =-15;
    lifeBoyHolder1p->fy =16;
    
    
    heroVSM->fxReal = 20;
     heroVSM->fx =20;
    heroVSM->fy = -16;
    heroVSM->isAir =true;
    heroVSM->reset();
    
    heroVSF->fxReal = 70;
    heroVSF->fx =70;
    heroVSF->fy = -16;
    heroVSF->isAir =true;
     heroVSF->reset();
    
    
 
    
}
void PixelMain::updateGameVS(float timeElapsed)
{
    if (gameState == STATE_GAME_OVER)
    {
        switchTime -=timeElapsed;
        gameOverText.update(switchTime);
       /* if( switchTime>8&& switchTime<9)
        {
        
            gameOverText.fy = backEaseOut(1-(switchTime-8),0,15,1);
        } if( switchTime<8)
        {
        
            gameOverText.fy = 15;
        }*/
        if(switchTime<0)
        {
            gameOverText.hide();
            setGameState(STATE_INTRO);
            return;
        }
}
    if (gameState == STATE_GAME_START)
    {
        
        
        lifeBoyHolderVS->fx = Sprite::linearEase(1-switchTime,-15,19,1);
        lifeGirlHolderVS->fx = Sprite::linearEase(1-switchTime,104,-19,1);
        
        switchTime -=timeElapsed;
        if(switchTime<0){
            setGameState(STATE_GAME);
            lifeBoyHolderVS->fx = 4;
            lifeGirlHolderVS->fx = 85;
        }
        
        
        
        
        return;
        
    }
    
    
    resolveShoot(liveVS,specialAttackBufferVS);
  checkShoot(liveVS,specialAttackBufferVS,bloodBufferVS);
    
    
    
    heroVSM->update(timeElapsed);
    heroVSF->update(timeElapsed);
    
 
    resolveAttack(liveVS,bloodBufferVS);
    
        
    for (size_t i=0;i<specialAttackBufferVS.size();i++)
    {
        specialAttackBufferVS[i]->update(timeElapsed,stagefx);
    }
    
    
    
    
    //
    //chek hit etc
    
    
    if(  heroVSM->hitTestRect(heroVSF))
    {
       //cout << "hit"<<endl;
        heroVSM->speed =0;
        if(  heroVSM->fxReal< heroVSF->fxReal)
        {
            heroVSM->fxReal-=0.5;
            heroVSF->fxReal+=0.5;
        }else
        {
            heroVSM->fxReal+=0.5;
            heroVSF->fxReal-=0.5;
        
        }
    
       

    }

    if(heroVSF->fxReal<5)
    {
    heroVSF->fxReal =84;
    
    }if(heroVSF->fxReal>85)
    {
        heroVSF->fxReal =6;
        
    }
    if(heroVSM->fxReal<5)
    {
        heroVSM->fxReal =84;
        
    }if(heroVSM->fxReal>85)
    {
        heroVSM->fxReal =6;
        
    }
    //
    //
    heroVSM->setLevelPos(stagefx);
    heroVSF->setLevelPos(stagefx);
    
   

    for (size_t i=0;i<   decorVS.size();i++)
    {
        decorVS[i]->setLevelPos(stagefx);
    }
    for (int i=0;i<3;i++)
    {
        cloudsVS[i]->update(timeElapsed);
        
    }
    for (size_t i=0;i<bloodBufferVS.size();i++)
    {
        bloodBufferVS[i]->update(timeElapsed,stagefx);
        
    }
    if(heroVSF->life==0 && gameState ==STATE_GAME)
    {
        gameOverText.show(1);
        
        setGameState(STATE_GAME_OVER); ;
   

   
    
    }
    if(heroVSM->life==0&& gameState ==STATE_GAME)
    {
        gameOverText.show(2);
        
        setGameState(STATE_GAME_OVER); ;
        
        
        
        
    }
    lifeGirlVS.setLife(heroVSF->life);
    lifeBoyVS.setLife(heroVSM->life);
    
    lifeBoyVS.update(timeElapsed);
    lifeGirlVS.update(timeElapsed);
  
}
