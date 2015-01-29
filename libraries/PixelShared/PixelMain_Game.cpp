//
//  PixelMain_Game.cpp
//  PixelGameLocal
//
//  Created by Kris Temmerman on 24/10/13.
//
//

#include "PixelMain.h"

#include "DataPond.h"

#include "DataHitPointTest.h"

#include "DataBackGrass.h"

#include "DataManJump.h"
#include "DataManStand.h"
#include "DataManWalk1.h"
#include "DataManWalk2.h"
#include "DataManWalk3.h"

#include "DataManCrouch.h"

#include "DataManJumpKick.h"
#include "DataManCrouchKick.h"
#include "DataManStandKick.h"

#include "DataManJumpHit.h"
#include "DataManCrouchHit.h"
#include "DataManStandHit1.h"
#include "DataManStandHit2.h"

#include "DataManJumpKick.h"
#include "DataManCrouchKick.h"
#include "DataManStandKick.h"

#include "DataManJumpBlock.h"
#include "DataManCrouchBlock.h"
#include "DataManStandBlock.h"
#include "DataBoyDeath.h"

#include "DataManGitHit1.h"
#include "DataManGitHit2.h"

#include "DataGirlJump.h"
#include "DataGirlStand.h"
#include "DataGirlWalk1.h"
#include "DataGirlWalk2.h"
#include "DataGirlWalk3.h"

#include "DataGirlCrouch.h"

#include "DataGirlJumpKick.h"
#include "DataGirlCrouchKick.h"
#include "DataGirlStandKick.h"

#include "DataGirlJumpHit.h"
#include "DataGirlCrouchHit.h"
#include "DataGirlStandHit1.h"
#include "DataGirlStandHit2.h"

#include "DataGirlJumpKick.h"
#include "DataGirlCrouchKick.h"
#include "DataGirlStandKick.h"

#include "DataGirlJumpBlock.h"
#include "DataGirlCrouchBlock.h"
#include "DataGirlStandBlock.h"
#include "DataGirlDeath.h"

#include "DataGirlGotHit1.h"
#include "DataGirlGotHit2.h"

#include "Alien1.h"
#include "Alien2.h"
#include "AlienPond.h"

#include "DataManCrouchWalk1.h"
#include "DataManCrouchWalk2.h"

#include "DataGirlCrouchWalk1.h"
#include "DataGirlCrouchWalk2.h"


//
// Decor Data
//

Array<Cloud,6> _clouds;
Array<Sprite,2> _backgroundGame;
const DataCloud1 _cloudData;
const DataBackGrass _backGrass;

Vector<DecorSprite *>aliensDecor;


//
// Boy Data
//

const DataManJump jumpDataB;
DataManJumpKick jumpKickDataB;
const DataManJumpHit jumpHitDataB;
const DataManJumpBlock jumpBlockDataB;

const DataManCrouch crouchDataB;
const DataManCrouchWalk1 crouchDataWalk1B;
const DataManCrouchWalk2 crouchDataWalk2B;
DataManCrouchKick crouchKickDataB;
DataManCrouchHit crouchHitDataB;
const DataManCrouchBlock crouchBlockDataB;

const DataManStand standDataB;
const DataManStandKick standKickDataB;
DataManStandHit1 standHitData1B;
DataManStandHit2 standHitData2B;
const DataManStandBlock standBlockDataB;
const DataManGitHit1 gotHit1B;
DataManGitHit2 gotHit2B;

const DataManWalk1 walk1DataB;
const DataManWalk2 walk2DataB;
const DataManWalk3 walk3DataB;
const DataBoyDeath deathDataB;


//
// Girl Data
//

const DataGirlJump jumpDataG;
DataGirlJumpKick jumpKickDataG;
const DataGirlJumpHit jumpHitDataG;
const DataGirlJumpBlock jumpBlockDataG;

const DataGirlCrouch crouchDataG;
const DataGirlCrouchWalk1 crouchDataWalk1G;
const DataGirlCrouchWalk2 crouchDataWalk2G;
DataGirlCrouchKick crouchKickDataG;
DataGirlCrouchHit crouchHitDataG;
const DataGirlCrouchBlock crouchBlockDataG;

const DataGirlStand standDataG;
DataGirlStandKick standKickDataG;
DataGirlStandHit1 standHitData1G;
DataGirlStandHit2 standHitData2G;
const DataGirlStandBlock standBlockDataG;
const DataGirlGotHit2 gotHit1G;
DataGirlGotHit2 gotHit2G;

const DataGirlWalk1 walk1DataG;
const DataGirlWalk2 walk2DataG;
const DataGirlWalk3 walk3DataG;
const DataGirlDeath deathDataG;

void PixelMain::initGame()
{
    // boy
    jumpKickDataB.centerX-=1;

    crouchKickDataB.centerX-=1;
    crouchHitDataB.centerX-=1;

    standHitData1B.centerX-=1;
    standHitData2B.centerX-=1;
    gotHit2B.centerY-=1;

    // girl
    jumpKickDataG.centerX-=1;

    crouchKickDataG.centerX-=1;
    crouchHitDataG.centerX-=1;

    standKickDataG.centerX-=1;
    standHitData1G.centerX-=1;
    standHitData2G.centerX-=1;
    gotHit2G.centerY-=1;

    //set the data
    setHeroData(&hero1pm,0);

    setHeroData(&hero2pF,1);
    setHeroData(&hero2pM,0);
    
     setHeroData(&heroVSF,1);
     setHeroData(&heroVSM,0);

    lifeBoyHolder1p.currentData = &boyInterData;

    lifeBoyHolder2p.currentData = &boyInterData;
    lifeGirlHolder2p.currentData = &girlInterData;
    lifeBoyHolderVS.currentData = &boyInterData;
    lifeGirlHolderVS.currentData = &girlInterData;
}
void PixelMain::alienHitTest(Hero * hero,const Vector <Alien *> &aliens,const Vector<Blood *> &bloods)
{
    if(hero->saveTime >0)return;
    for(size_t i=0;i<aliens.size();i++)
    {
        if(aliens[i]->intHidden)continue;
    
        if(  hero->hitTestRect(aliens[i]))
        {
            Alien * alien = aliens[i];
            //water
            if(alien->heroType==5)
            {
                
                hero->life --;
             

                
                if(hero->life==0){
                    hero->setDead();
                    
                }else
                {
                    hero->hitWater();
                    hero-> saveTime =0.3;
                }
                if(gameType == GAME_TYPE_1P)
                {
                    waterSplash1p.show(hero->fxReal);
                }
                if(gameType == GAME_TYPE_2P)
                {
                    waterSplash2p.show(hero->fxReal);
                }
            
            }else{
            
                if(alien->fxReal > hero->fxReal)
                {
                    hero->hitSpeed =-35;
               
                }
                else
                {
                    hero->hitSpeed =35;
                }
           
                hero->speed =0;
                hero->life --;
            
            
                if(hero->life==0){
                    hero->setDead();
               
                }
           
            
                hero->hitFall =rand()%2;
                hero->saveTime =0.8;
            
                Blood * blood =getBlood(bloods);
                if(blood!=0)
                {
                    blood->fxReal = hero->fxReal ;
                    blood->fy= hero->fy -4;
                    blood->show();

                }
            }
        }
    
    }

    


}


void  PixelMain::resolveAttack(const Vector<Live *> &lives,const Vector<Blood *> &bloods)
{

    for(size_t j=0;j<lives.size();j++)
    {
         if(lives[j]->intHidden)continue;
        Live *attacker=lives[j];
        if(attacker->attackType == HIT ||attacker->attackType == KICK )
        {
            int hitPosX=attacker->fxReal+attacker->hitX;
            int hitPosY = attacker->y+attacker->hitY;
           
            for(size_t i=0;i<lives.size();i++)
            {
                    if( lives[i]->heroType==5)continue;
                   if(lives[i]->intHidden)continue;
                if(i==j)continue;
                if(gameType == GAME_TYPE_2P)
                {
                  
                    if(attacker->heroType==1 && lives[i]->heroType==0)
                    {
                       continue;
                
                    } if(attacker->heroType==0 && lives[i]->heroType==1)
                    {
                        continue;
                        
                    }
                
                
                }
                
                if(lives[i]->saveTime>0  )return;
                
                bool hasHit = lives[i]->hitTest(hitPosX,hitPosY);
               
                if(hasHit   )
                {
              //      Serial.println("hit");
                      Live *attackee=lives[i];
                    if(attackee->attackType==BLOCK && attackee->drawType !=attacker->drawType )
                    {
                       if(attackee->x>attacker->x)
                        {
                            attacker->hitSpeed =-20;
                        }else 
                        {
                               attacker->hitSpeed =20;
                        }
                        
                        
                    }
                    else
                    {
                        if(attackee->x>attacker->x)
                        {
                           attackee->hitSpeed =35;
                        }else 
                        {
                            attackee->hitSpeed =-35;
                        }
                    
                        attackee->life --;
                        
                       if(attackee->life==0)
                       {
                           attackee->setDead();
                       }
                        if(attacker->drawType==1)
                            attackee->drawType =0;
                        else if (attacker->drawType==0)
                            attackee->drawType =1;
                        
                        attackee->hitFall =rand()%2;
                       attackee->saveTime =0.8;
                        
                        Blood * blood =getBlood(bloods);
                        if(blood!=0)
                        {
                            blood->fxReal = hitPosX;
                            blood->fy= hitPosY;
                            blood->show();
                        }
                    }
                }

            
            }
        }
    }
    
    
  

}
void  PixelMain::checkShoot(const Vector<Live *> &lives,const Vector<SpecialAttack *> &attacs,const Vector<Blood *> &bloods)
{

    for(size_t j=0;j<attacs.size();j++)
    {
        if(attacs[j]->isUsed)
        {
          
            SpecialAttack * attack = attacs[j];
            for(size_t i=0;i<lives.size();i++)
            {
                
                if(gameType == GAME_TYPE_2P)
                {
                    
                    if(attack->heroType==1 && lives[i]->heroType==0)
                    {
                        continue;
                        
                    } if(attack->heroType==0 && lives[i]->heroType==1)
                    {
                        continue;
                        
                    }
                    
                    
                }

                if( attack->heroType>1 && lives[i]->heroType>1)continue;
            if( attack->heroType != lives[i]->heroType)
            {
              
                if(lives[i]->hitTest(attack->fxReal, attack->fy) &&   lives[i]->saveTime<=0)
                {
                    Live *attackee=lives[i];
                                    
                    if(attackee->attackType==BLOCK && attack->drawType !=attackee->drawType )
                    {
                        if(attackee->x >  attack->x)
                        {
                            attackee->hitSpeed =20;
                           
                        }else
                        {
                           attackee->hitSpeed =-20;
                        }
                         attackee->speed =0;
                        attack-> hit();
                    }
                    else
                    {
                        if(attackee->x>attack->x)
                        {
                            attackee->hitSpeed =35;
                        }else
                        {
                            attackee->hitSpeed =-35;
                        }
                        //playSound(SOUND_HIT);
                        attackee->life --;
                        
                        if(attackee->life==0)
                        {
                            attackee->setDead();
                        }
                        if(attack->drawType==1)
                            attackee->drawType =0;
                        else if (attack->drawType==0)
                            attackee->drawType =1;
                        
                        attackee->hitFall =rand()%2;
                        attackee->saveTime =0.8;
                        
                        Blood * blood =getBlood(bloods);
                        if(blood!=0)
                        {
                            blood->fxReal = attack->fxReal;
                            blood->fy= attack->fy;
                            blood->show();
                        }
                         attack-> hit();
                    }

                
                
                
                }
            
            
            }
        
        }
    
        }
    
    }

}
void  PixelMain::resolveShoot(const Vector<Live *> &lives,const  Vector<SpecialAttack *> &attacts)
{
    for(size_t i=0;i< lives.size();i++)
    
    if(lives[i]->startShoot)
    {
        lives[i]->startShoot =false;
        SpecialAttack * attack=getSpecialAttack(attacts);
        if(attack){
            attack->fxReal =lives[i]->fxReal +4;
            if(lives[i]->drawType==1)attack->fxReal -=7;
            
            attack->fy =lives[i]->y-2;
            attack->start(lives[i]->drawType, lives[i]->heroType);
        }
    }



}

Blood * PixelMain::getBlood(const Vector<Blood *> &bloods)
{
    for (size_t i=0;i<bloods.size();i++)
    {
        if(!bloods[i]->isUsed) return bloods[i];
        
    }
    return 0;
}
SpecialAttack * PixelMain::getSpecialAttack(const  Vector<SpecialAttack *> &attacts)
{
    
    for (size_t i=0;i<attacts.size();i++)
    {
        if(!attacts[i]->isUsed) return attacts[i];
        
    }
    return 0;
    
}


void  PixelMain::resetGame()
{
    _gameOverText.reset();
    _aliens1.reset();
    _aliens2.reset();
    _alienBoss.reset();

    endGame  =false;
    stagefx =0;
    resetGame1p();
    resetGame2p();
    resetGameVS();

    for (size_t i=0;i<aliensDecor.size();i++)
        aliensDecor[i]->setLevelPos(stagefx);
}

void PixelMain::setupGame()
{
    //backGround

    for (int i=0; i<2; i++)
    {
        _backgroundGame[i].drawType =3;
        _backgroundGame[i].currentData = &_backGrass;
    }

    stage.addChild(&_backgroundGame[0]);
    stageVS.addChild(&_backgroundGame[1]);

    for (int j=0;j<6;j++)
    {
        Cloud *c = &_clouds[j];
        c->currentData  = &_cloudData;
        c->fx = rand()%90;
        c->fy = rand()%5  -4+_cloudData.height();
        c->setup();

        if (j<3) stage.addChild(c);
        else stageVS.addChild(c);
    }
}

void PixelMain::setupAliensGame()
{
    // Setup the 1p and 2p common game assets
    int posCity [2] = {30,150};
    for(int i=0;i<MAX_CITIES;i++)
    {
        DecorSprite * city = &_cities[i];
        city ->currentData = &_cityData;

        city->fx = city->fxReal = posCity [i];

        city->fy =7;
        city->depth =0.2;

        aliensDecor.push_back(city);
    }
    srand (5);
    int treePosS [15] = { 35,296,120,157,272,221,253,90,112,55,97,35,190,158,224};
    int treePosSH [15] = {-1,0,-1,-1,0,0,0,-1,-1,0,-1,-1,0,0,-1};

    for(int i=0;i<MAX_FARTREES;i++)
    {
        DecorSprite * treeFar = &_farTrees[i];
        treeFar ->currentData = &_treeFarData;
        treeFar ->fx  =treeFar ->fxReal = treePosS[i];
       // cout << treeFar->fx<<",";
        int rPos = treePosSH[i];

        treeFar ->fy = -rand()%2+_treeFarData.height();
        treeFar ->depth=0.3;
        if( rPos ==-1) treeFar ->depth=0.25;


        aliensDecor.push_back(treeFar );
    }

     //srand (1);
    int treePos [8] = {50,233,270,400,430,250,252,147};
    int treePosH [8] = {-2,0,-1,-2,0,-2,-1,-1};
    for(int i=0;i<MAX_CLOSETREES;i++)
    {
        DecorSprite * treeClose = &_closeTrees[i];

        treeClose->currentData = &_treeCloseData;
        treeClose->fx = treeClose->fxReal = treePos [i];
       // cout << treeClose->fx<<",";
        int rPos = treePosH[i]  ;

        treeClose->fy = rPos+_treeCloseData.height()-5;
        treeClose->depth =0.8;
        if( rPos ==-1)treeClose->depth=0.5;
        if( rPos ==-2)treeClose->depth=0.4;

        aliensDecor.push_back(treeClose );
    }
    srand (1);
    for(int i=0;i<MAX_FLOWERS;i++)
    {
        DecorSprite * flower = &_flowers[i];
        flower ->currentData = &_flowerData;

        flower->fx = flower->fxReal = rand()%600;
        int rPos = -rand()%3;
         flower->fy = rPos+16;
         flower->depth =1;
        if( rPos ==-2)  flower->depth=0.98;
        if( rPos ==-3)  flower->depth=0.95;


        aliensDecor.push_back( flower);
    }
    int posBush [] = {60,150, 400,470};
    for(int i=0;i<MAX_BUSHES;i++)
    {
        DecorSprite * bush = &_bushes[i];

        bush->currentData = &_bushData;
        bush->fx = bush->fxReal = posBush[i];

        bush->fy = 13;
        bush->depth =1;
        aliensDecor.push_back( bush );
    }

    int posPaddo[] = {250,320,550};
    for(int i=0;i<MAX_PADDOS;i++)
    {
        DecorSprite * paddo = &_paddos[i];

        paddo->currentData = &_paddoData;
        paddo->fx = paddo->fxReal = posPaddo[i];

        paddo->fy = 13;
        paddo->depth =1;
        aliensDecor.push_back( paddo);
    }

    // slow sort ;)
    bool sorted =false;
    while(!sorted){
        sorted  =true;
        for (size_t i=0;i<   aliensDecor.size()-1;i++)
        {
            if(aliensDecor[i]->depth >aliensDecor[i+1]->depth)
            {
                DecorSprite *temp = aliensDecor[i];
                aliensDecor[i] = aliensDecor[i+1];
                aliensDecor[i+1] = temp;
                sorted  =false;
            }
        }
    }
    for (size_t i=0;i<   aliensDecor.size();i++)
    {
        stage.addChild(aliensDecor[i]);
    }
}

void  PixelMain::setHeroData(Hero * hero,int type)
{

    if(type==0)
    {
        hero->jumpData = &jumpDataB ;
        hero->jumpKickData = &jumpKickDataB;
        hero->jumpHitData= &jumpHitDataB;
        hero->jumpBlockData = &jumpBlockDataB;
        
        hero->crouchData = &crouchDataB;
        hero->crouchKickData = &crouchKickDataB;
        hero->crouchHitData = &crouchHitDataB;
        hero->crouchBlockData = &crouchBlockDataB ;
        
        hero->standData = &standDataB ;
        hero->standKickData = &standKickDataB ;
        hero->standHitData1 = &standHitData1B;
        hero->standHitData2 = &standHitData2B;
        hero->standBlockData = &standBlockDataB;
        
        hero->gotHitData1 = &gotHit1B;
        hero->gotHitData2 = &gotHit2B;
        
        hero->walk1Data = &walk1DataB ;
        hero->walk2Data = &walk2DataB;
        hero->walk3Data = &walk3DataB;
        hero->deathData = &deathDataB;
    
        hero->crouchWalk1Data = &crouchDataWalk1B;
         hero->crouchWalk2Data = &crouchDataWalk2B;
    }else if(type==1)
    {
    
        hero->jumpData = &jumpDataG ;
        hero->jumpKickData = &jumpKickDataG;
        hero->jumpHitData = &jumpHitDataG;
        hero->jumpBlockData = &jumpBlockDataG;
        
        hero->crouchData = &crouchDataG;
        hero->crouchKickData = &crouchKickDataG;
        hero->crouchHitData = &crouchHitDataG;
        hero->crouchBlockData = &crouchBlockDataG ;
        
        hero->standData = &standDataG ;
        hero->standKickData = &standKickDataG ;
        hero->standHitData1 = &standHitData1G;
        hero->standHitData2 = &standHitData2G;
        hero->standBlockData = &standBlockDataG;
        
        hero->crouchWalk1Data = &crouchDataWalk1G;
        hero->crouchWalk2Data = &crouchDataWalk2G;
        
        hero->walk1Data = &walk1DataG ;
        hero->walk2Data = &walk2DataG;
        hero->walk3Data = &walk3DataG;
        hero->deathData = &deathDataG;
    
        hero->gotHitData1 = &gotHit1G;
        hero->gotHitData2 = &gotHit2G;

    
    }

    hero->currentData = hero->jumpData;
}

void PixelMain::updateGame(float timeElapsed)
{
    // Update the common game assets
    for (int i=0;i<3;i++)
        _clouds[i].update(timeElapsed);
}

void PixelMain::updateAliensGame(float timeElapsed)
{
    // Update the 1p and 2p common game assets

    if (gameState != STATE_GAME_START)
    {
        for (size_t i=0;i<aliensDecor.size();i++)
            aliensDecor[i]->setLevelPos(stagefx);
    }
}
