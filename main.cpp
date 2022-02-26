
#include"TxLib.h"

void drawWindows()
{
txSetColor(TX_BLACK,3);
txSetFillColor(RGB(255,201,14));
txRectangle(205,374,73,467);

txSetColor(TX_BLACK,3);
txSetFillColor(RGB(255,201,14));
txRectangle(205,374,139,403);
txLine(139,374,139,464);
}

void drawStar(int x,int y )
{
txSetColor(TX_BLACK);
txSetFillColor(RGB(255,255,168));
txCircle(x+883-883,y+142-142 ,5);
}

void drawMoon(int x,int y )
{
txSetColor(TX_WHITE);
txSetFillColor(RGB(255,255,128));
txCircle(x,y,70);
}

void drawMoonDamaging(int x,int y )
{
txSetColor(TX_WHITE);
txSetFillColor(RGB(255,255,128));
txCircle(x+50-50,y+80-80,70);

txSetColor(TX_BLACK);
txSetFillColor(RGB(0,0,64));
txCircle(x+64-50,y+83-80,58);
}

void drawBackGroundEvening()
{
txSetColor(TX_BLACK);
txSetFillColor(RGB(0,0,64));
txRectangle(0,0,950,600);

txSetColor(TX_BLACK);
txSetFillColor(RGB(0,255,64));
txRectangle(0,545,950,600);
}

void drawBackGroundNight()
{
txSetColor(TX_BLACK);
txSetFillColor(RGB(0,0,45));
txRectangle(0,0,950,600);
txSetColor(TX_BLACK);
txSetFillColor(RGB(0,255,64));
txRectangle(0,545,950,600);

txSetColor(TX_BLACK);
txSetFillColor(RGB(255,255,187));
txCircle(178,24,3);
txCircle(224,26,3);
txCircle(263,28,3);
txCircle(267,61,3);
txCircle(303,67,3);
txCircle(308,34,3);
txCircle(172,98,3);
txCircle(26,64,3);
txCircle(424,21,3);
txCircle(540,21,3);
txCircle(638,84,3);
txCircle(708,21,3);
}

void drawBackGround()
{
txSetColor(TX_BLACK);
txSetFillColor(RGB(240,100,107));
txRectangle(0,0,950,600);

txSetColor(TX_BLACK);
txSetFillColor(RGB(0,255,64));
txRectangle(0,545,950,600);
}

void drawHouse()
{
txSetColor(TX_BLACK);
txSetFillColor(RGB(84,22,12));
txRectangle(5,285,483,598);

txSetColor(TX_BLACK,3);
txSetFillColor(RGB(218,116,33));
txRectangle(378,420,485,598);

txSetColor(TX_BLACK);
txSetFillColor(RGB(138,45,13));
txRectangle(404,261,455,178);

txSetColor(TX_BLACK);
txSetFillColor(RGB(138,45,13));
POINT star[3] = {{5,285}, {246,66}, {484,285}};
txPolygon(star,3);
//окна
txSetColor(TX_BLACK,3);
txSetFillColor(RGB(128,255,255));
txRectangle(205,374,73,467);

txSetColor(TX_BLACK,3);
txSetFillColor(RGB(128,255,255));
txRectangle(205,374,139,403);
txLine(139,374,139,464);
}

void drawSun(int x,int y)
{
txSetColor(TX_YELLOW);
txSetFillColor(RGB(255,201,14));
txCircle(x ,y ,70);
}

void drawMan()
{
txSetColor(TX_BLACK,3);
txLine(635,545,651,490);
txLine(678,545,651,490);
txLine(651,490,651,442);
txLine(651,443,635,490);
txLine(651,443,671,490);

 txSetColor(TX_BLACK,3);
txSetFillColor(RGB(255,189,157));
txCircle(651,420,20);
}

void drawManRun(int x,int y)
{
txSetColor(TX_BLACK,3);
//Ноги
txLine( x+651-651,y+490-490,x+657-651,y+518-490);
txLine(x+657-651,y+518-490,x+619-651,y+551-490);
txLine(x+651-651,y+490-490,x+674-651,y+518-490);
txLine(x+674-651,y+518-490,x+660-651,y+555-490);
//Руки
txLine(x+651-651,y+443-490,x+675-651,y+458-490);
txLine(x+633-651,y+458-490,x+625-651,y+479-490);
txLine(x+651-651,y+443-490,x+635-651,y+459-490);
txLine(x+675-651,y+459-490,x+656-651,y+473-490);
//ТЕЛО
txLine(x+651-651,y+443-490,x+650-651,y+490-490);

 txSetColor(TX_BLACK,3);
txSetFillColor(RGB(255,189,157));
txCircle(x+651-651,y+420-490,20);
}

void drawChayka1(int x,int y)
{
txSetColor(TX_BLACK,3);
txLine(x ,y-64,x+32,y-53);
txLine(x+32 ,y-53,x+40,y-14);
txLine(x+40 ,y-14,x+68,y-24);
txLine(x+68,y-24,x+89,y-13);
}

void drawChayka2(int x,int y)
{
txSetColor(TX_BLACK,3);
txLine(x+673,y+23,x+705,y+32);
txLine(x+705,y+32,x+723,y+51);
txLine(x+723,y+51,x+743,y+38);
txLine(x+743,y+38,x+769,y+39);
}

void drawKot()
{
txSetColor(TX_BLACK,3);
txSetFillColor(TX_BLACK);
POINT star[3] = {{556,542}, {573,506}, {589,542}};
txPolygon(star,3);

txSetFillColor(TX_BLACK);
txSetColor(TX_BLACK,3);
txCircle(583,489,18);

txSetColor(TX_BLACK,4);

txLine(570,473,577,458);
txLine(577,458,583,469);
txLine(583,469,592,459);
txLine(592,459,595,474);
}

void drawTree()
{
txSetColor(TX_BLACK);
txSetFillColor(RGB(125,40,0));
txRectangle(904,546,855,427);

txSetColor(TX_BLACK);
txSetFillColor(RGB(66,134,21));
txEllipse(824,450,932,122);
}

void drawStaticScena3()
{
drawWindows;
drawBackGroundNight();
drawMan();
drawHouse();
drawKot();
drawTree();
}
void drawStaticScena2()
{
drawWindows();
drawBackGroundEvening();
drawHouse();
drawKot();
drawTree();
}
void drawStaticScena()
{
drawBackGround();
drawKot();
drawTree();
}


int main()
{
txCreateWindow(950,600);

int yMoonDamaging=136;

int xManRun=50;

int xStar=950;

int yMoon=600;

int ySun=80;

int xChayka1=0;

int xChayka2=10;

int yText=600;

while (yText > -600)
{
txBegin();
txSetColor(TX_WHITE);
txSetFillColor(TX_BLACK);
txRectangle(0,0,950,600);
txSelectFont("Times", 50);
txDrawText(0,yText-600,950,yText,
             "INGENERKA Animation Studio\n"
              "\n"
              "Presents\n"
              "\n"
              "Анимационный фильм\n"
              "\n"
              "Фильм основан на нереальных снах автора\n"
               "\n"
              "Приятного просмотра\n");



yText=yText-2;
txSleep(10);
txEnd;
}
txSleep(10);
yText=600;
while (yText > -600)
{
txBegin();
txSetColor(TX_WHITE);
txSetFillColor(TX_BLACK);
txRectangle(0,0,950,600);
txSelectFont("Cooper Black", 50);
txDrawText(0,yText-600,950,yText,
             "Новолуние\n");



yText=yText-1;
txSleep(10);
txEnd;
}
txSleep(10);
txEnd;

while (ySun<=200)
{
txBegin();
drawStaticScena();

//Чайка 1
drawChayka1(xChayka1,100);
xChayka1=xChayka1+5;

//Чайка 2
drawChayka2(xChayka2,110);
xChayka2=xChayka2+5;

//Cолнце
drawSun(80,ySun);
ySun=ySun+1;

drawHouse();

txSleep(10);
txEnd();
}

while (yMoon>=400)
{
txBegin();
drawStaticScena2();
//Луна
drawMoon(80,yMoon);
yMoon=yMoon-1;

//Человек
drawManRun(xManRun,490);
xManRun=xManRun+3;

drawHouse();
drawWindows();

txSleep(10);
txEnd();
}

while (yMoon>=253)
{
txBegin();
drawStaticScena3();
//Луна
drawMoon(80,yMoon);
yMoon=yMoon-1;

drawHouse();
drawWindows();

txSleep(10);
txEnd();
}


while (yMoon>=200)
{
txBegin();
drawStaticScena3();

//Луна
drawMoon(80,yMoon);
yMoon=yMoon-1;

//Звезда
drawStar(xStar,142);
xStar=xStar-15;

drawHouse();
drawWindows();

txSleep(10);
txEnd();
}

while (yMoonDamaging>=50)
{
txBegin();
drawStaticScena3();

//ЛунаПосле
drawMoonDamaging(80,yMoonDamaging);
yMoonDamaging=yMoonDamaging-1;

drawHouse();
drawWindows();

txSleep(10);
txEnd();
}
txSleep(1000);
yText=600;
while (yText > -600)
{
txBegin();
txSetColor(TX_WHITE);
txSetFillColor(TX_BLACK);
txRectangle(0,0,950,600);
txSelectFont("Times", 50);
txDrawText(0,yText-600,950,yText,
             "Автор:Мигалов Ярослав\n"
              "\n"
              "Продюсер:Гаврилова Оксана\n"
              "\n"
               "Оператор-Постановщик:Александ Пряморуков\n"
              "\n"
              "Режиссер-постановщик:Ольга Гудеева\n"
              "\n"
              "Монтажер:Лидия Кривоклеева\n"
              "\n"
               "Кастинг Директор:Михаил Фамильяров\n");

yText=yText-2;
txSleep(10);
txEnd;
}

txSleep(1000);
yText=600;
while (yText > -600)
{
txBegin();
txSetColor(TX_WHITE);
txSetFillColor(TX_BLACK);
txRectangle(0,0,950,600);
txSelectFont("Times", 50);
txDrawText(0,yText-600,950,yText,
              "В главных ролях\n"
              "\n"
              "Солнце:Генадий Яркий\n"
              "\n"
              "Луна:Дмитрий Засыпайло\n"
              "\n"
              "Человек:Савелий Просточелов\n"
              "\n"
              "Звезда:Алексей Звёздный\n"
              "\n"
              "Чайки:Братья Простоклюевы\n");

yText=yText-2;
txSleep(10);
txEnd;
}
txSleep(1000);
yText=600;
while (yText > -600)
{
txBegin();
txSetColor(TX_WHITE);
txSetFillColor(TX_BLACK);
txRectangle(0,0,950,600);
txSelectFont("Times", 50);
txDrawText(0,yText-600,950,yText,
               "Особая Благодарность\n"
              "\n"
              "Сергей Поврозюк\n"
              "\n"
              "Оксана Гаврилова\n"
              "\n"
              "Андрей Гаврилов\n"
              "\n"
              "Артём Гаврилов\n"
              "\n"
              "Спасибо за внимание:)\n");


yText=yText-2;
txSleep(10);
txEnd;
}
return 0;
}
