//========================================================================
//! @file       Main.cpp
//{=======================================================================
//!
//! @brief      <шар>\n
//! @brief      <нет>
//!
//! @version    [Version 0.01 alpha, build 1]
//! @author     Copyright (C) <Миша>, <20241119>
//! @date       <20241119>
//!
//! @par        Протестировано
//!
//!
//! @todo     -нет
//!
//! @bug      -нет
//!
//! @par        История изменений файла
//!           - Версия 0.01 Alpha
//!
//!
//}=======================================================================

#include "TXLib.h"

int main()
    {
        ///////////////////////////////////////////////osnovnie
int h = 800;//shirina
int w = 200;//visota
int zamedlenie = 0;//scorasthoda
int speed = 3;//scorostshaga
int r = 10 ;//radius
//////////////////////////////////////////////////////zavisimie
int running = 1;
int x = h / 2 ;
int y = w / 2 ;
int speedx  = speed;
int speedy  = speed;

txCreateWindow (h, w);//ocno
while (running >= 0)
    {
     txSetColor (RGB(255,0,0),30);//fon
    txSetFillColor (RGB(0,0,0));//fon
    txRectangle (0, 0, h, w);//fon
    txCircle(x,y,r);//shar
    if (x <= 0 + r or x >= h - r)//boca
    {
        speedx = speedx * -1;//invertacia
    }
    if (y <= 0 + r or y >= w - r )//verhogranich
    {
        speedy = speedy * -1;//invertacia
    }
    x = x + speedx;//shag
    y = y + speedy;//shag
    txSleep(zamedlenie);//zamedlenie
}

    return 0;
    }

