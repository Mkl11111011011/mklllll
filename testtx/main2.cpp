//========================================================================
//! @file       Main.cpp
//{=======================================================================
//!
//! @brief      <���������>\n
//! @brief      <������������>
//!
//! @version    [Version 0.01 alpha, build 1]
//! @author     Copyright (C) <�����>, <���> (<���> <�����>)
//! @date       <����>
//!
//! @par        ��������������
//!           - (TODO: ������ ��������)
//!
//! @todo     - (TODO: ������ ��������� ������ �� ����� �����)
//!
//! @bug      - (TODO: ������ ��������� ������ � ���� �����)
//!
//! @par        ������� ��������� �����
//!           - ������ 0.01 Alpha
//!             - ������ ��� ��������� ����
//!
//}=======================================================================

#include "TXLib.h"

int main()
    {
int running = 1;
int x = 400 ;
int y = 300 ;
int r = 10 ;
int speed = 3;
int speedx  = speed;
int speedy  = speed;
int h = 800;
int w = 50;
int zamedlenie = 0;
txCreateWindow (h, w);
while (running >= 0)
    {
     txSetColor (RGB(255,0,0),80);//fon
    txSetFillColor (RGB(0,0,0));//fon
    txRectangle (0, 0, 800, 600);//fon
    txCircle(x,y,r);
    if (x <= 0 + r or x >= h - r)
    {
        speedx = speedx * -1;
    }
    if (y <= 0 + r or y >= w - r )
    {
        speedy = speedy * -1;
    }
    x = x + speedx;
    y = y + speedy;
    txSleep(zamedlenie);
}

    return 0;
    }

