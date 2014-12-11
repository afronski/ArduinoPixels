//
//  PixelMain_Game_p1.cpp
//  PixelGameLocal
//
//  Created by Kris Temmerman on 28/10/13.
//
//

#include "PixelMain.h"

#include "GameOverText.h"
void PixelMain::setupGame1p()
{
   int posCity [2] = {30,150};
    for(int i=0;i<MAX_CITIES;i++)
    {
        DecorSprite * city = &_cities1p[i];
        city ->currentData = &_cityData;
        
        city->fx = city->fxReal = posCity [i];
        
        city->fy =7;
        city->depth =0.2;
               
        decor1p.push_back(city);
    }
    srand (5);
    int treePosS [15] = { 35,296,120,157,272,221,253,90,112,55,97,35,190,158,224};
    int treePosSH [15] = {-1,0,-1,-1,0,0,0,-1,-1,0,-1,-1,0,0,-1};
   
    for(int i=0;i<MAX_FARTREES;i++)
    {
        DecorSprite * treeFar = &_farTrees1p[i];
        treeFar ->currentData = &_treeFarData;
        treeFar ->fx  =treeFar ->fxReal = treePosS[i];
       // cout << treeFar->fx<<",";
        int rPos = treePosSH[i];
        
        treeFar ->fy = -rand()%2+_treeFarData.height();
        treeFar ->depth=0.3;
        if( rPos ==-1) treeFar ->depth=0.25;
      
        
        decor1p.push_back(treeFar );
    }
 
     //srand (1);
   int treePos [8] = {50,233,270,400,430,250,252,147};
    int treePosH [8] = {-2,0,-1,-2,0,-2,-1,-1};
    for(int i=0;i<MAX_CLOSETREES;i++)
    {
        DecorSprite * treeClose = &_closeTrees1p[i];

        treeClose->currentData = &_treeCloseData;
        treeClose->fx = treeClose->fxReal = treePos [i];
       // cout << treeClose->fx<<",";
        int rPos = treePosH[i]  ;
        
        treeClose->fy = rPos+_treeCloseData.height()-5;
        treeClose->depth =0.8;
        if( rPos ==-1)treeClose->depth=0.5;
        if( rPos ==-2)treeClose->depth=0.4;
               
        decor1p.push_back(treeClose );
    }
    srand (1);
    for(int i=0;i<MAX_FLOWERS;i++)
    {
        DecorSprite * flower = &_flowers1p[i];
        flower ->currentData = &_flowerData;

        flower->fx = flower->fxReal = rand()%600;
        int rPos = -rand()%3;
         flower->fy = rPos+16;
         flower->depth =1;
        if( rPos ==-2)  flower->depth=0.98;
        if( rPos ==-3)  flower->depth=0.95;


        decor1p.push_back( flower);
    }
    int posBush [] = {60,150, 400,470};
    for(int i=0;i<MAX_BUSHES;i++)
    {
        DecorSprite * bush = &_bushes1p[i];

        bush->currentData = &_bushData;
        bush->fx = bush->fxReal = posBush[i];
    
        bush->fy = 13;
        bush->depth =1;
        decor1p.push_back( bush );
    }
    
    int posPaddo[] = {250,320,550};
    for(int i=0;i<MAX_PADDOS;i++)
    {
        DecorSprite * paddo = &_paddos1p[i];

        paddo->currentData = &_paddoData;
        paddo->fx = paddo->fxReal = posPaddo[i];
        
        paddo->fy = 13;
        paddo->depth =1;
        decor1p.push_back( paddo);
    }
    
    // slow sort ;)
    bool sorted =false;
    while(!sorted){
        sorted  =true;
        for (size_t i=0;i<   decor1p.size()-1;i++)
        {
            if(decor1p[i]->depth >decor1p[i+1]->depth)
            {
                DecorSprite *temp = decor1p[i];
                decor1p[i] = decor1p[i+1];
                decor1p[i+1] = temp;
                sorted  =false;
            }
        }
    }
    for (size_t i=0;i<   decor1p.size();i++)
    {
        stage1p.addChild( decor1p[i]);

    }
    int posAlienPond [2] = {193,350};
    for (int i=0;i<MAX_ALIENPOND;i++)
    {
        AlienPond *alien = &_alienPonds[i];
        alien->setup();
        alien->fx  = alien->fxReal = posAlienPond [i];
        alien->fy =16;
        aliens1p.push_back(alien);
        stage1p.addChild(alien);
        live1p.push_back(alien);
    }

    
    for (int i=0;i<MAX_ATTACKS;i++)
    {
        SpecialAttack *attack = &_specialAttacks[i];

        attack->setup();
        specialAttackBuffer1p.push_back(attack);
        stage1p.addChild(attack);
    }
       int posAlien1 [4] = {290,380, 451 , 500};
    for (int i=0;i<MAX_ALIEN;i++)
    {

        Alien1 *alien  = &_alien1_1p[i];

        alien->fx  = alien->fxReal = posAlien1 [i]; // rand()%200;
        alien->fy =15;
         alien->setup();
        aliens1p.push_back(alien);
        stage1p.addChild(alien);
        live1p.push_back(alien);
    
    }
    
     int posAlien2 [4] = {95,150, 250 , 420};
    for (int i=0;i<MAX_ALIEN;i++)
    {
        Alien2 *alien = &_alien2_1p[i];
      
        alien->fx  = alien->fxReal =posAlien2[i];
        alien->fy =15;
        alien->setup();//setup after fx
        aliens1p.push_back(alien);
        stage1p.addChild(alien);
        live1p.push_back(alien);

    }     
    {
    alienBoss1p = &_alienBoss;
    
    alienBoss1p->fx  =  alienBoss1p->fxReal =600;//40+ rand()%200;
    alienBoss1p->fy =15;
    alienBoss1p->setup();//setup after fx
    aliens1p.push_back(alienBoss1p);
    stage1p.addChild(alienBoss1p);
    live1p.push_back(alienBoss1p);
    }
  
    
     ///hero
   // setHeroData(&hero1pm,0);
    stage1p.addChild(&hero1pm);
    hero1pm.setup(0);
   
    live1p.push_back(&hero1pm);
    
    
    //life
    lifeBoyHolder1p.currentData = &boyInterData ;
    lifeBoy1p.setup();
    lifeBoy1p.fx =0;
    lifeBoy1p.fy=-2;
    
    lifeBoyHolder1p.addChild(&lifeBoy1p);
    stage1p.addChild(&lifeBoyHolder1p);

    stage1p.addChild(&waterSplash1p);
    
    
    for (int i=0;i<MAX_BLOOD;i++)
    {
        Blood *blood = &_bloods[i];
        blood->setup();
        bloodBuffer1p.push_back(blood);
        stage1p.addChild(blood);
    }
    gameOverText.fy = 0;
    gameOverText.fx =0;
    stage1p.addChild(&gameOverText);
    
    
}
void PixelMain::resetGame1p()
{
    lifeBoy1p.reset();
    lifeBoyHolder1p.fx =-15;
    lifeBoyHolder1p.fy =16;
    hero1pm.fxReal = 20;
    hero1pm.fx =20;
    hero1pm.fy = -16;
    hero1pm.reset();
    gameOverText.fy = 0;
    for(size_t i=0;i< aliens1p.size();i++)
    {

        aliens1p[i]->reset();

    }
    
    
    hero1pm.setLevelPos(stagefx);
    
    for(size_t i=0;i< aliens1p.size();i++)
    {

        aliens1p[i]->setLevelPos(stagefx);

    }

    for (size_t i=0;i<   decor1p.size();i++)
    {
        decor1p[i]->setLevelPos(stagefx);
    }
}

void PixelMain::updateGame1p (float timeElapsed)
{
    
    if (gameState == STATE_GAME_OVER)
    {
        switchTime -=timeElapsed;
        gameOverText.update(switchTime);
    
        if(switchTime<0)
        {
            gameOverText.hide();
            setGameState(STATE_INTRO);
            return;
        
        }
    }
    if (gameState == STATE_GAME_START)
    {
        
        
        lifeBoyHolder1p.fx = Sprite::linearEase(1-switchTime,-15,19,1);
               
        switchTime -=timeElapsed;
        if(switchTime<0){
            setGameState(STATE_GAME);
            lifeBoyHolder1p.fx = 4;
        }
               for (int i=0;i<3;i++)
        {
            clouds1p[i]->update(timeElapsed);
            
        }

        
        
        
        return;
        
    }
  
    for(size_t i=0;i< aliens1p.size();i++)
    {
    
         aliens1p[i]->update(timeElapsed);

    }
    
    
        hero1pm.update(timeElapsed);
    
    
    resolveShoot(live1p,specialAttackBuffer1p);

    checkShoot(live1p,specialAttackBuffer1p,bloodBuffer1p);





    if(hero1pm.fxReal < -10 )
    {
        hero1pm.fxReal  =-10;
        hero1pm.setKey(0);
    }
    if(hero1pm.fxReal >550 )
    {
        endGame =true;
       
    }
    if( endGame )
    {
        if(hero1pm.fxReal <550 )
        {
            hero1pm.fxReal  =550;
            hero1pm.setKey(0);
        }
        if(hero1pm.fxReal >640 )
        {
            hero1pm.fxReal  =640;
            hero1pm.setKey(0);
        }
    }
    if(hero1pm.fxReal > stagefx+60 )
    {
        stagefx += hero1pm.fxReal -( stagefx+60 );
    
    }
    else  if(hero1pm.fxReal < stagefx+15)
    {
        stagefx -= ( stagefx+15 )-hero1pm.fxReal ;
        
    }
    
    for (size_t i=0;i<specialAttackBuffer1p.size();i++)
    {
        specialAttackBuffer1p[i]->update(timeElapsed, stagefx);
    }
    //if(rand()%20==0)cout << hero1pm.fxReal <<endl;
   alienHitTest(&hero1pm, aliens1p,bloodBuffer1p);
    
    resolveAttack(live1p,bloodBuffer1p);
    
    
   
    
    
    hero1pm.setLevelPos(stagefx);

    for(size_t i=0;i< aliens1p.size();i++)
    {
        
        aliens1p[i]->setLevelPos(stagefx);
        
    }
    
    
    
    for (size_t i=0;i<   decor1p.size();i++)
    {
        decor1p[i]->setLevelPos(stagefx);
    }
    for (int i=0;i<3;i++)
    {
        clouds1p[i]->update(timeElapsed);
        
    }
  
    lifeBoy1p.setLife(hero1pm.life);
    lifeBoy1p.update(timeElapsed);
   
    
    
    
    for (size_t i=0;i<bloodBuffer1p.size();i++)
    {
        bloodBuffer1p[i]->update(timeElapsed,stagefx);
        
    }
    waterSplash1p.update(timeElapsed,stagefx);
    
    if( alienBoss1p->isDead && gameState ==STATE_GAME)
    {
        gameOverText.show(3);
        
        setGameState(STATE_GAME_OVER);
        return;
    }
    
    if(&hero1pm.life==0  && gameState ==STATE_GAME)
    {
        gameOverText.show();
      
         setGameState(STATE_GAME_OVER); ;
    }
    
    
    
   
}
