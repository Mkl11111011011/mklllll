//========================================================================
//! @file       Main.cpp
//{=======================================================================
//!
//! @brief      <Заголовок>\n
//! @brief      <Подзаголовок>
//!
//! @version    [Version 0.01 alpha, build 1]
//! @author     Copyright (C) <Автор>, <Год> (<Имя> <Почта>)
//! @date       <Дата>
//!
//! @par        Протестировано
//!           - (TODO: список платформ)
//!
//! @todo     - (TODO: список ближайших планов по этому файлу)
//!
//! @bug      - (TODO: список найденных ошибок в этом файле)
//!
//! @par        История изменений файла
//!           - Версия 0.01 Alpha
//!             - Только что созданный файл
//!
//}=======================================================================

#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);
int running = 1;
int x = 400 ;
int y = 300 ;
int r = 40 ;
int speedx  = 10;
int speedy  = 10;
while (running >= 0)
    {
     txSetColor (RGB(255,0,0),2);//fon
    txSetFillColor (RGB(0,0,0));//fon
    txRectangle (0, 0, 800, 600);//fon
    txCircle(x,y,r);
    if (x <= 0 + r or x >= 800 - r)
    {
        speedx = speedx * -1;
    }
    if (y <= 0 + r or y >= 600 - r )
    {
        speedy = speedy * -1;
    }
    x = x + speedx;
    y = y + speedy;
    txSleep(30);
}

    return 0;
    }

