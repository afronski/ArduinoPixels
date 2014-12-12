//
//  GameOverText.h
//  PixelGameLocal
//
//  Created by Kris Temmerman on 05/11/13.
//
//

#ifndef PixelGameLocal_GameOverText_h
#define PixelGameLocal_GameOverText_h
#include "Sprite.h"
#include "DataTextGameOver.h"
#include "DataTextGirlWins.h"
#include "DataTextBoyWins.h"
#include "DataTextYouWin.h"
#include "DataBackSpace.h"
class GameOverText:public Sprite
{
    const DataTextGameOver gameOver;
    DataTextGirlWins girlWins;
    DataTextBoyWins boyWins;
    DataTextYouWin youWin;

    Sprite textSprite;

public:
    GameOverText()
    {
        drawType =3;
        textSprite.currentData =0;
        textSprite.fx =45;
        addChild(&textSprite);

        girlWins.centerY = 12;
        boyWins.centerY = 12;
        youWin.centerY = 13;

        visible =false;
    }
    void show(int type =0)
    {
        visible =true;

        switch (type) {
        case 0:
            textSprite.currentData = &gameOver;
            break;
        case 1:
            textSprite.currentData= &boyWins;
            break;
        case 2:
            textSprite.currentData = &girlWins;
            break;
        case 3:
            textSprite.currentData = &youWin;
            break;
        }

        textSprite.fy =-4;
    }
    void update(float switchTime)
    {
       
        if( switchTime>8&& switchTime<9)
        {
            textSprite.fy = backEaseOut(1-(switchTime-8),-4,13+4,1);
        }
        else  if( switchTime<8 && switchTime>1 )
        {
            textSprite.fy = 13;
        }
        else if(switchTime<1 )
        {
            textSprite.fy = expoEaseIn (1-switchTime,13,16,1);
        }
    }
    void hide()
    {
        visible =false;
    }
};


#endif
