//
//  PixelMain.h
//  PixelGame
//
//  Created by Kris Temmerman on 15/09/13.
//  Copyright (c) 2013 Kris Temmerman. All rights reserved.
//

#ifndef PixelGame_PixelMain_h
#define PixelGame_PixelMain_h


#include "PixelRenderer.h"
#include "Stage.h"
#include "PixelGameInclude.h"

#include "DataInterface.h"
#include "DataInterface2.h"

#include "Hero.h"
#include "DataThreeClose.h"
#include "DataThreeFar.h"
#include "DataCloud1.h"
#include "Dataflower.h"
#include "Cloud.h"
#include "Blood.h"
#include "Life.h"
#include "SpecialAttack.h"
#include "Vector.h"

#include "SpaceShip.h"
#include "Star.h"
#include "DecorSprite.h"
#include "Live.h"

#include "Alien.h"
#include "Alien1.h"
#include "Alien2.h"
#include "Alien3.h"
#include "AlienPond.h"

#include "WaterSplash.h"
#include "GameOverText.h"
#include "SoundPlayer.h"
#include "Alien3.h"
#define STATE_INTRO 10
#define STATE_INTRO_TO_MENU 11
#define STATE_MENU 12
#define STATE_MENU_TO_GAME 13
#define STATE_GAME_START 14
#define STATE_GAME 15
#define STATE_GAME_OVER 16

#define GAME_TYPE_1P 100
#define GAME_TYPE_2P 101
#define GAME_TYPE_VS 102
class PixelMain
{
public:
    SoundPlayer soundPlayer;
    Alien3 *alienBoss2p;
    Alien3 *alienBoss1p;
    
    PixelRenderer * renderer;
    
    PixelMain(PixelRenderer *renderer);
    void setup();
    
    
    void setGameState(int state);
    
    int gameState;
    int gameType;
    
    
    void update(float timeElapsed);
    
    void draw();
    
    void setInput(int key);
    void setWin(int);
    
    Stage stage2p;
    Stage stage1p;
    Stage stageVS;
    
    float switchTime;
    /*
     INTRO STUFF
     */
    ///////////////////////////////////////
    
    void setupIntro();
    void updateIntro(float timeElapsed);
    void resetIntro();
    void allocIntro();
    void deallocInto();
    float introTime;
    
    Stage stageIntro;
    Sprite * invasionText;
    SpaceShip spaceShip;
    Sprite *pressKeyText;

    #define MAX_STARS 20
    Star _stars[MAX_STARS];
    Vector <Star *> stars;
    
    Sprite * backgroundIntro;
    
    ////////////////////////////////////////
    /*
   MENU STUFF
     */
    ///////////////////////////////////////
    
    void setupMenu();
    void updateMenu(float);
    void menuRight();
    void menuLeft();
    void allocMenu();
    void deallocMenu();
    
    Stage stageMenu;
    Sprite * backgroundMenu;
    
    Sprite * menuItem1;
    Sprite * menuItem2;
    Sprite * menuItem3;
    Sprite *menuBack;
    float menuSpeed  ;   int menuPos;
    
    
    ////////////////////////////////////////
    //GAME STUFF SHARED
    void allocGame();
    void deallocGame();

    void setupGame();
    void updateGame(float);
    void setHeroData(Hero * hero,int type);
    void setLifeData(Life * life);
    
    void setAliens(const Vector<Alien *> &aliens);
    
    Blood * getBlood(const Vector<Blood *> & _bloods);
    SpecialAttack * getSpecialAttack(const Vector<SpecialAttack *> &attacs);
    
    GameOverText gameOverText;

    #define MAX_ATTACKS 16
    SpecialAttack _specialAttacks[MAX_ATTACKS];
    #define MAX_BLOOD 8
    Blood _bloods[MAX_BLOOD];
    
    Vector<SpecialAttack *>specialAttackBuffer1p;
    Vector<Blood *>bloodBuffer1p;
    
    Vector<SpecialAttack *>specialAttackBuffer2p;
    Vector<Blood *>bloodBuffer2p;
    
    Vector<SpecialAttack *>specialAttackBufferVS;
    Vector<Blood *>bloodBufferVS;

    void resolveShoot(const Vector<Live *> &lives,const Vector<SpecialAttack *> &attacs);
    void checkShoot(const Vector<Live *> &lives,const Vector<SpecialAttack *> &attacs,const Vector<Blood *> &_bloods);
    void resolveAttack(const Vector<Live *> &lives,const Vector<Blood *> &_bloods);
    
    void alienHitTest(Hero * hero,const Vector<Alien *> &aliens,const Vector<Blood *> &_bloods);
    
    //shared

    // TODO share data between games
    // OR move to cpp files
    #define MAX_CITIES 2
    DecorSprite _cities1p[MAX_CITIES];
    DecorSprite _cities2p[MAX_CITIES];
    DecorSprite _citiesVS[1];
    #define MAX_FARTREES 15
    DecorSprite _farTrees1p[MAX_FARTREES];
    DecorSprite _farTrees2p[MAX_FARTREES];
    DecorSprite _farTreesVS[3];
    #define MAX_CLOSETREES 8
    DecorSprite _closeTrees1p[MAX_CLOSETREES];
    DecorSprite _closeTrees2p[MAX_CLOSETREES];
    DecorSprite _closeTreesVS[1];
    #define MAX_FLOWERS 20
    DecorSprite _flowers1p[MAX_FLOWERS];
    DecorSprite _flowers2p[MAX_FLOWERS];
    DecorSprite _flowersVS[6];
    #define MAX_BUSHES 4
    DecorSprite _bushes1p[MAX_BUSHES];
    DecorSprite _bushes2p[MAX_BUSHES];
    DecorSprite _bushesVS[1];
    #define MAX_PADDOS 3
    DecorSprite _paddos1p[MAX_PADDOS];
    DecorSprite _paddos2p[MAX_PADDOS];
    #define MAX_ALIEN 4
    Alien1 _alien1_1p[MAX_ALIEN];
    Alien1 _alien1_2p[MAX_ALIEN];
    Alien2 _alien2_1p[MAX_ALIEN];
    Alien2 _alien2_2p[MAX_ALIEN];
    #define MAX_ALIENPOND 2
    AlienPond _alienPonds[MAX_ALIENPOND];
    Alien3 _alienBoss;

        PixelData * splashFrame1;
        PixelData * splashFrame2;
    
        DataThreeClose *treeCloseData;
        DataThreeFar *treeFarData;
        DataCloud1 *cloudData;
        Dataflower *flowerData;
        PixelData *paddoData;
        PixelData * backGrass ;
        PixelData * cityData;
        PixelData * bushData;
    //heroData
    
        PixelData * jumpDataB;
        PixelData * jumpKickDataB;
        PixelData * jumpHitDataB;
        PixelData * jumpBlockDataB;
    
    
        PixelData * crouchDataB;
        PixelData * crouchDataWalk1B;
        PixelData * crouchDataWalk2B;
        PixelData * crouchKickDataB;
        PixelData * crouchHitDataB;
        PixelData * crouchBlockDataB;
    
        PixelData * standDataB;
    
        PixelData * standKickDataB;
        PixelData * standHitData1B;
        PixelData * standHitData2B;
        PixelData * standBlockDataB;
    
    
        PixelData * walk1DataB;
        PixelData * walk2DataB;
        PixelData * walk3DataB;
    
        PixelData * deathDataB;
    PixelData * gotHit1B;
    PixelData * gotHit2B;
    
        PixelData * jumpDataG;
        PixelData * jumpKickDataG;
        PixelData * jumpHitDataG;
        PixelData * jumpBlockDataG;
    
    
        PixelData * crouchDataG;
        PixelData * crouchDataWalk1G;
   
        PixelData * crouchDataWalk2G;
        PixelData * crouchKickDataG;
        PixelData * crouchHitDataG;
        PixelData * crouchBlockDataG;
    
        PixelData * standDataG;
    
        PixelData * standKickDataG;
        PixelData * standHitData1G;
        PixelData * standHitData2G;
        PixelData * standBlockDataG;
    
    
        PixelData * walk1DataG;
        PixelData * walk2DataG;
        PixelData * walk3DataG;
    
        PixelData * deathDataG;
    PixelData * gotHit1G;
    PixelData * gotHit2G;
    //////////////////////lifedata
        PixelData boyInterData = DataInterface();
        PixelData girlInterData = DataInterface2();
    
        PixelData * life0;
        PixelData * life1;
        PixelData * life2;
        PixelData * life3;
    
        PixelData * life4;
        PixelData * life5;
        PixelData * life6;
        PixelData * life7;
    
        PixelData * lifeGlow;

    //////////////////
    float stagefx;
    Hero * boyHero;
    Hero * girlHero;

    //GAME 1PLAYER
    void setupGame1p();
    void updateGame1p(float timeElapsed);
    void resetGame1p();

    Vector<Cloud *>clouds1p;
    Vector<DecorSprite *>decor1p;
    
    Hero *hero1pm;
    
    Vector <Alien *> aliens1p;
    Sprite *lifeBoyHolder1p;
    Life lifeBoy1p;
  
    Vector<Live *>live1p;
    WaterSplash * waterSplash1p;
    //GAME 2 PLAYER
    
    void setupGame2p();
    void updateGame2p(float timeElapsed);
    void resetGame2p();
    Vector<Cloud *>clouds2p;
    Vector <Alien *> aliens2p;
    Hero *hero2pM;
    Hero *hero2pF;
    Sprite *lifeBoyHolder2p;
    Sprite *lifeGirlHolder2p;
    Life lifeGirl2p;
    Life lifeBoy2p;
    Vector<Live *>live2p;
    Vector<DecorSprite *>decor2p;
    WaterSplash * waterSplash2p;
    //GAME VS
    
    void setupGameVS();
    void updateGameVS(float timeElapsed);
    void resetGameVS();
    Vector<Cloud *>cloudsVS;
    Hero *heroVSM;
    Hero *heroVSF;
    
    Sprite *lifeBoyHolderVS;
    Sprite *lifeGirlHolderVS;
    Life lifeGirlVS;
    Life lifeBoyVS;
    Vector<Live *>liveVS;
    Vector<DecorSprite *>decorVS;
    
    void resetGame();
    bool readyToStart;

    bool endGame ;

    int brightness;
};



#endif
