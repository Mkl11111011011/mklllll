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

void menb(int x,int y)
{
    txLine(x,y,x,150+y); // тело
    txLine(x,40+y,25+x,150+y); // лрука
    txLine(x,40+y,x-25,150+y); // прука
    txLine(x,150+y,25+x,260+y); // лнога
    txLine(x,150+y,x-25,260+y); // пнога
    txCircle(x,y,25); // голова
}
void fon_pesh()
{
      txSetColor (RGB(0,0,0),2);//fon
    txSetFillColor (RGB(90,90,90));//fon
    txRectangle (0, 0, 800, 600);//fon
    txSetColor (RGB(175,175,175),2);//fon
    txSetFillColor (RGB(175,175,175));//fon
    txRectangle (0, 0, 800, 300);//fon
}
void sub(const char* subtitres)
{
txTextOut (10,550,subtitres);
}

int main()
    {
    txCreateWindow (800, 600);
    int running = 1;
    int time = -251 ;
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    int x0 = 0;
    while (running < 10) {
     txSetColor (RGB(255,0,0),2);//fon
    txSetFillColor (RGB(0,0,0));//fon
    txRectangle (0, 0, 800, 600);//fon
    time = time + 1; // vremia
    txSelectFont("Comic Sans MS", 40);
    if (time >= -250 and time <= -200){
        txLine(100,280,670,280);
    }//zglazzred
    if (time >= -199 and time <= -150){
        txLine(90,300,270,200);
        txLine(270,200,500,190);
        txLine(500,190,700,280);
        txLine(700,280,670,310);
        txLine(670,310,310,360);
        txLine(310,360,90,300);
        txSetColor (RGB(255,0,0),2);
        txSetFillColor (RGB(250,0,0));
        txCircle(380,270,80);
        txSetColor (RGB(255,0,0),2);
        txSetFillColor (RGB(0,0,0));
        txEllipse(370,195,390,340);
    }//otglazzred
    if (time >= -149 and time <= -100){
        txSetColor (RGB(255,200,0),2);
        txSetFillColor (RGB(0,0,0));
        txLine(100,280,670,280);
    }//zglazzyel
    if (time >= -99 and time <= -50){
        txSetColor (RGB(255,200,0),2);
        txSetFillColor (RGB(0,0,0));
        txLine(90,300,270,200);
        txLine(270,200,500,190);
        txLine(500,190,700,280);
        txLine(700,280,670,310);
        txLine(670,310,310,360);
        txLine(310,360,90,300);
        txSetColor (RGB(255,200,0),2);
        txSetFillColor (RGB(250,200,0));
        txCircle(380,270,80);
        txSetColor (RGB(255,200,0),2);
        txSetFillColor (RGB(0,0,0));
        txEllipse(370,195,390,340);
    }//otglazzyel
    if (time >= -49 and time <= 100)
        {
            fon_pesh();
            txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(255,0,0));
        menb(350 + x0 , 200);
        txSetColor (RGB(255,200,0),2);
    txSetFillColor (RGB(255,200,0));
        menb(450 - x0 , 200);
        x0 = x0 + 1;
        sub("intelligence_20_vs_lake_20");
        }//vs_vs
    if (time >= 101 and time <= 200){
            fon_pesh();
    txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(0,0,0));
    txLine(490 - x1,300,490 - x1,150);
    txLine(510 - x1,170,470 - x1,170);
    txRectangle(400 - x1, 300, 580 - x1, 360);
       txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(250,0,0));
    menb(200 + x1,200);
    x1 = x1 + 2;
    }//mech i chel

    if (time >= 201 and time <= 250)
        {
        txLine(360,100,360,600);
    txLine(183,489-x1/3,183,195);
    txLine(586,59,586,396+x1/2);
    txLine(390,405-x1/5,390,-x1/3);
    x1 = x1 - 4;
        }// rolling
    if (time >= 251 and time <= 300) {
     txLine(110,150,400,400);
     txLine(400,150,110,400);
     txLine(450,150,700,400);
     txLine(450,400,700,150);
     sub("20");
    }//chislo 20
    if (time >= 301 and time <= 450) {
            fon_pesh();
             txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(0,0,0));
    txLine(375,500 + y1,375,0 + y1);
    txLine(425,500 + y1,425,0 + y1);
    txLine(375,500 + y1,400,600 + y1);
    txLine(425,500 + y1,400,600 + y1);
    txRectangle(0,400,800,600);
    y1 = y1 - 1;
    sub("+20_mana");
    }//mech podnit
        if (time >= 451 and time <= 453) {
    x1 = 0;
    x2 = 0;
    y1 = 0;
    y2 = 0;
    }
    if (time >= 454 and time <= 600) {
        fon_pesh();
    txSetColor (RGB(250,200,0),2);
    txSetFillColor (RGB(250,200,0));
    menb(400 - x1,200);
    txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(255,0,0));
    menb(200 + x1,200);
    txLine(225 + x1,350,300,180);
    txLine(225 + x1 * 0.89,340,240 + x1 * 0.89,340);
    x1 = x1 + 1;
    }//chel vs chel
    if (time >= 601 and time <= 650)
        {
        txLine(360,100,360,600);
    txLine(183,489-x1/3,183,195);
    txLine(586,59,586,396+x1/2);
    txLine(390,405-x1/5,390,-x1/3);
    x1 = x1 - 4;
        }// rolling
    if (time >= 651 and time <= 700) {
     txLine(310,150,600,400);
     txLine(600,150,310,400);
     sub("10");
    }//chislo 10
    if (time >= 701 and time <= 750) {
        fon_pesh();
    txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(0,0,0));
    txLine(375,350 + y1,375,-150 + y1);
    txLine(425,350 + y1,425,-150 + y1);
    txLine(375,350 + y1,400,450 + y1);
    txLine(425,350 + y1,400,450 + y1);
    txSetColor (RGB(250,200,0),2);
    txSetFillColor (RGB(0,0,0));
    txRectangle(0,400,800,600);
    y1 = y1 + 1;
    }//mech opushen
        if (time >= 751 and time <= 753) {
    x1 = 0;
    y1 = 0;
    y2 = 0 ;
        }
    if (time >= 754 and time <= 800)
        {
            txSetColor (RGB(250,200,0),2);
    txSetFillColor (RGB(0,0,0));
        txLine(360,100,360,600);
    txLine(183,489-x1/3,183,195);
    txLine(586,59,586,396+x1/2);
    txLine(390,405-x1/5,390,-x1/3);
    x1 = x1 - 4;
        }// rolling
    if (time >= 801 and time <= 850) {
            txSetColor (RGB(250,200,0),2);
    txSetFillColor (RGB(0,0,0));
     txLine(110,150,400,400);
     txLine(400,150,110,400);
     txLine(450,150,700,400);
     txLine(450,400,700,150);
     sub("20");
    }//chislo 20

    if (time >= 851 and time <= 900) {
            txSetColor (RGB(250,200,0),2);
    txSetFillColor (RGB(0,0,0));
            txLine(0,400,400,400);
    txLine(400,400,600,400 - x2);
    x2 = x2 + 2;

    } // ulibka
    if (time >= 901 and time <= 903){
            fon_pesh();
     txSetColor (RGB(250,200,0),2);
    txSetFillColor (RGB(250,200,0));
    menb(400 - y2,200);
    txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(255,0,0));
    menb(200 + y2,200);
    txLine(225,350,300,180);
    txLine(225,340,240,340);
    y2 = 200;
    }
     if (time >= 904 and time <= 907){
         fon_pesh();
     txSetColor (RGB(250,200,0),2);
    txSetFillColor (RGB(250,200,0));
    menb(400 - y2,200);
    txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(255,0,0));
    menb(200 + y2,200);
    txLine(225,350,300,180);
    txLine(225,340,240,340);
    y2 = 0;
    }
     if (time >= 908 and time <= 910){
         fon_pesh();
     txSetColor (RGB(250,200,0),2);
    txSetFillColor (RGB(250,200,0));
    menb(400 - y2,200);
    txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(255,0,0));
    menb(200 + y2,200);
    txLine(225,350,300,180);
    txLine(225,340,240,340);
    y2 = 200;
    }
     if (time >= 911 and time <= 913){
         fon_pesh();
     txSetColor (RGB(250,200,0),2);
    txSetFillColor (RGB(250,200,0));
    menb(400 - y2,200);
    txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(255,0,0));
    menb(200 + y2,200);
    txLine(225,350,300,180);
    txLine(225,340,240,340);
    y2 = 0;
    }
     if (time >= 914 and time <= 923){
         fon_pesh();
     txSetColor (RGB(250,200,0),2);
    txSetFillColor (RGB(250,200,0));
    menb(400 - y2,200);
    txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(255,0,0));
    menb(200 + y2,200);
    txLine(225,350,300,180);
    txLine(225,340,240,340);
    y2 = 200;
    }
         if (time >= 924 and time <= 950){
             fon_pesh();
     txSetColor (RGB(250,200,0),2);
    txSetFillColor (RGB(250,200,0));
    menb(400 - y2,200);
    txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(255,0,0));
    txLine(225,350,300,180);
    txLine(225,340,240,340);
    menb(200 + y2,200);
    y2 = 0;
    }
          if (time >= 924 and time <= 1000){
              fon_pesh();
     txSetColor (RGB(250,200,0),2);
    txSetFillColor (RGB(250,200,0));
    menb(400 - y2,200);
    txSetColor (RGB(255,0,0),2);
    txSetFillColor (RGB(255,0,0));
    txLine(225,350,300,180);
    txLine(225,340,240,340);
    menb(200 + y2,200);
    y2 = 200;
    sub("intelect_20_is_winner");
    }
    if (time >= 1001 and time <= 1300)
        {
            fon_pesh();\
                txSetColor (RGB(0,0,0),5);
    txSetFillColor (RGB(0,0,0));
        txSelectFont("Comic Sans MS", 30);
        txTextOut (10,50,"explanation :");
        txTextOut (10,130,"In N.R.I., with a large amount of mana and a small amount of intelligence,");
        txTextOut (10,210,"magic does not work. But with a lot of intelligence and a small amount of ");
        txTextOut (10,290,"mana, magic works");
        txTextOut (10,370,"by misha kocheulov");
        }
     if (time >= 1301 and time <= 1302){
        time = -250;
        x1 = 0;
    x2 = 0;
    y1 = 0;
    y2 = 0;
     }
    txSleep(30);


    }
    return 0;
    }

