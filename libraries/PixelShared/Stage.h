//
//  Stage.h
//  pixelgame
//
//  Created by Kris Temmerman on 09/09/13.
//
//

#ifndef pixelgame_Stage_h
#define pixelgame_Stage_h




#include "PixelGameInclude.h"
#include "Sprite.h"
#include "PixelRenderer.h"


class Stage :public Sprite{

public:
    
    int stageHeight;
    int stageWidth;
    Stage(){
        stageHeight=16;
        stageWidth=90;
    }
    
    
    PixelRenderer * renderer;

    void draw()
    {
        for(size_t i=0;i<children.size();i++)
           draw(children[i]);
    }

    void draw(Sprite *child)
    {
        drawSprite(child);
        for(size_t i=0;i<child->children.size();i++)
           draw(child->children[i]);
    }

    void drawSprite(Sprite * s )
    {
        if(s->intHidden)return;
        if(!s->visible)return;
      
        if(s->currentData==0)return;
        if(s->currentData->indices==0)return;
        int sx =s->x;
        int sy=s->y;
      
        int xOff = s->currentData->centerX;
        int yOff = s->currentData->centerY;
        if(s->drawType==0)
        {
            for(int yp=0;yp<s->currentData->height;yp++)
            {
          
            int yPos  = yp+sy-yOff ;
     
            if(yPos<0 || yPos>stageHeight )continue;
            int pixelPosY =yp* s->currentData->width;
          
            for(int xp=0;xp<s->currentData->width;xp++)
                {
                int xPos  =xp+sx-xOff;

                if(xPos<0 || xPos>=stageWidth)continue;
                int pixelPosIndex =(pixelPosY+xp);

                uint8_t index = s->currentData->indices[pixelPosIndex];
                if( index==255)continue;

                mixPixel(xPos,yPos,s->currentData->color[index],s->currentData->color[index+1],s->currentData->color[index+2],s->currentData->color[index+3]);
                }
            }
        }
        else if(s->drawType==1)
        {
            for(int yp=0;yp<s->currentData->height;yp++)
            {
                
                int yPos  = yp+sy-yOff;
                
                if(yPos<0 || yPos>stageHeight )continue;
                int pixelPosY =yp* s->currentData->width;
                
                for(int xp=0;xp<s->currentData->width;xp++)
                {
                    int xPos  =xp+sx-(s->currentData->width -xOff);
                    
                    if(xPos<0 || xPos>stageWidth)continue;
                    int pixelPosIndex =pixelPosY+s->currentData->width-1 -xp;
              
                    uint8_t index = s->currentData->indices[pixelPosIndex];
                    if( index==255)continue;
                    
                    
                    mixPixel(xPos,yPos,s->currentData->color[index],s->currentData->color[index+1],s->currentData->color[index+2],s->currentData->color[index+3]);
                    
                }
            }
        }
       else if(s->drawType==3)
        {
            for(int yp=0;yp<s->currentData->height;yp++)
            {
                
                int yPos  = yp+sy;
                
                if(yPos<0 || yPos>stageHeight )continue;
                int pixelPosY =yp* s->currentData->width;
                
                for(int xp=0;xp<90;xp++)
                {
                    int xPos  =xp+sx;

                    if(xPos<0 || xPos>stageWidth)continue;

                    int pixelPosIndex =(pixelPosY);
                    uint8_t index = s->currentData->indices[pixelPosIndex];
                    if(index==255)continue;

                    mixPixel(xPos,yPos,s->currentData->color[index],s->currentData->color[index+1],s->currentData->color[index+2],s->currentData->color[index+3]);
                    
                }
            }
        }
    }

    void mixPixel(int x,int y,uint8_t r,uint8_t g,uint8_t b,uint8_t a )
    {
           renderer->setPixel(x,y,r,g,b,a);
    }



};

#endif
