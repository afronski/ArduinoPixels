//
//  PixelMain_Intro.cpp
//  PixelGameLocal
//
//  Created by Kris Temmerman on 24/10/13.
//
//

#include "PixelMain.h"
#include "DataTextInvasion.h"
#include "DataTextPressToPlay.h"
#include "DataBackSpace.h"

#include <iostream>

const DataTextInvasion dataTextInvasion;
const DataTextPressToPlay dataTextPressToPlay;
const DataBackSpace dataBackSpace;

void PixelMain::allocIntro()
{
    invasionText.currentData = &dataTextInvasion;
    pressKeyText.currentData = &dataTextPressToPlay;
}
void PixelMain::setupIntro()
{
    backgroundIntro.drawType =3;
    backgroundIntro.currentData = &dataBackSpace;
    stageIntro.addChild(&backgroundIntro);
    
    for (int i=0;i<MAX_STARS;i++)
    {
        Star *s = &_stars[i];
        s->randomize();
        
        stageIntro.addChild(s);
        stars.push_back(s);
    }

    stageIntro.addChild(&invasionText);
    invasionText.fx = 45;
    invasionText.fy = 12;

    spaceShip.setup();
    stageIntro.addChild(&spaceShip);
    spaceShip.fx = 45;
    spaceShip.fy = 13;

    stageIntro.addChild(&pressKeyText);
    pressKeyText.fx = 45;
    pressKeyText.fy = 12;
    
    resetIntro();
}
void PixelMain::resetIntro()
{
    
    introTime=0;
    invasionText.fx = -45;
     spaceShip.fx = -20;
    spaceShip.reset();
    pressKeyText.visible =false;

}
void PixelMain::updateIntro(float timeElapsed)
{
    
    //t is the current time (or position) of the tween. This can be seconds or frames, steps, seconds, ms, whatever – as long as the unit is the same as is used for the total time 
    //b is the beginning value of the property.
    //c is the change between the beginning and destination value of the property.
    //d is the total time of the tween.
    
    introTime+=timeElapsed;
    int step=0;
    float stepTime  = introTime;
    while(stepTime >1)
    {
        stepTime -=1;
        step++;
    
    }
   
    

    if(step==1)
    {
      
       
        invasionText.fx = Sprite::backEaseOut(stepTime,-45,90,1);
    
    }else if(step==4)
    {
    
        invasionText.fx = Sprite::linearEase(stepTime,45,90+45,1);
        spaceShip.fx = Sprite::linearEase(stepTime,-20,20+45+2,1);


    }else if(step==5)
    {
        spaceShip.showHead();
        
    }
    else if(step==12)
    {
        spaceShip.fx = Sprite::linearEase(stepTime,45+2,20+45,1);
    }
    else if(step>13&& step<16 )
    {
       
        if(stepTime<0.7){
            pressKeyText.visible =true;
        }else
        {
        pressKeyText.visible =false;
        }

        
        
    }
       else if(step==16)resetIntro();
    
    spaceShip.update(timeElapsed);
    
    for (size_t i=0;i<stars.size();i++)
    {
        stars[i]->update(timeElapsed);
    
    }
    
}
