#include "Ventana.h"
#include <graphics.h>

Ventana::Ventana(){
                   altura = 720;
                   ancho = 1280;
                   initwindow( ancho , altura , "Catalogo de Ropa" );
                   
                   bool inicio = false; 
                   PantallaInicial();
                   do {
                       delay(50);
                       Encabezado(inicio);
                   } while (true);
                   
                   closegraph();
                   
                   }

void Ventana::PantallaInicial(){
                           setcolor(BLACK);
                           rectangle(0, ancho, 0, altura);
                           setcolor(WHITE);
                           setlinestyle(0, 1, 3);
                           rectangle(500, 300, 780, 360); 
                           outtextxy(560, 320, "INICIAR");
                           outtextxy(450, 250, "BIENVENIDO A LA TIENDA DE ROPA");   
}

void Ventana::Encabezado(bool &inicio){
    int Z = ancho;
    setcolor(WHITE);
    setlinestyle(0, 1, 3);
    rectangle(0, 0, 1280, 120);
    rectangle(90, 50, 250, 90);
    outtextxy(Z - 4 * (Z / 4) + 100, 60, "Playeras");
    rectangle(300, 50, 510, 90);
    outtextxy(Z - 3 * (Z / 4), 60, "Sudaderas");
    rectangle(950, 50, 1060, 90);
    outtextxy(Z - (Z / 4), 60, "Accesorios");
    rectangle(1150, 50, 1260, 90);
    outtextxy(Z - 120, 60, "Chamarras");
    setlinestyle(5, 3, 5);
    outtextxy(600, 60, "CATALOGO DE LA TIENDA DE ROPA");
    rectangle(90, 120, 150, 150);
    outtextxy(100, 130, "INICIO");

    if (ismouseclick(WM_LBUTTONDOWN)) {
        getmouseclick(WM_LBUTTONDOWN, xm, xy);

        if (!inicio) {
            if (xm > 500 && xm < 780 && xy > 300 && xy < 360) {
                inicio = true;
                Encabezado(inicio);
            }
        } else {
            if (xm < 250 && xm > 90 && xy < 90 && xy > 50) {
                cleardevice();
                getch();
                Encabezado(inicio);
                Playeras();
            }
            if (xm < 510 && xm > 300 && xy < 90 && xy > 50) {
                cleardevice();
                getch();
                Encabezado(inicio);
                Sudaderas();
            }
            if (xm < 1060 && xm > 950 && xy < 90 && xy > 50) {
                cleardevice();
                getch();
                Encabezado(inicio);
                Accesorios();
            }
            if (xm < 1260 && xm > 1150 && xy < 90 && xy > 50) {
                cleardevice();
                getch();
                Encabezado(inicio);
                Chamarras();
            }
            if (xm < 150 && xm > 90 && xy < 150 && xy > 120) {
                PantallaInicial();
                inicio = false;
            }
        }
    }
    }

void Ventana::Playeras(){
     outtextxy(200, 130, "Playeras");
     
     rectangle(100, 200, 280, 460); 
     outtextxy(160, 400, "Playera");
     readimagefile("playera1.jpg", 100, 200, 280, 380);
     
     rectangle(500, 200, 680, 460); 
     outtextxy(560, 400, "Playera");
     readimagefile("playera2.jpg", 500, 200, 680, 380);
     
     rectangle(900, 200, 1080, 460); 
     outtextxy(960, 400, "Playera");
     readimagefile("playera3.jpg", 900, 200, 1080, 380);
     
     
     rectangle(100, 500, 280, 760); 
     outtextxy(160, 700, "Playeras");
     readimagefile("playera4.jpg", 100, 500, 280, 740);
     
     rectangle(500, 500, 680, 760); 
     outtextxy(560, 720, "Playeras");
     readimagefile("playera5.jpg", 500, 500, 680, 740);
     
     rectangle(900, 500, 1080, 760); 
     outtextxy(960, 720, "Playeras");
     readimagefile("playera6.jpg", 900, 500, 1080, 740);
     
     if (xm < 280 && xm > 100 && xy < 460 && xy > 200) {
                cleardevice();
                getch();
                Encabezado(inicio);
            }
     if (xm < 680 && xm > 500 && xy < 460 && xy > 200) {
                cleardevice();
                getch();
                Encabezado(inicio);
            }
     if (xm < 1080 && xm > 900 && xy < 460 && xy > 200) {
                cleardevice();
                getch();
                Encabezado(inicio);
            }
     if (xm < 280 && xm > 100 && xy < 760 && xy > 500) {
                cleardevice();
                getch();
                Encabezado(inicio);
            }
     if (xm < 680 && xm > 500 && xy < 760 && xy > 500) {
                cleardevice();
                getch();
                Encabezado(inicio);
            }
     if (xm < 1080 && xm > 900 && xy < 760 && xy > 500) {
                PantallaInicial();
                inicio = false;
            }
     }
     
void Ventana::Sudaderas(){
     outtextxy(200, 130, "Sudaderas");
     
     rectangle(100, 200, 280, 460); 
     outtextxy(160, 400, "Sudadera");
     readimagefile("sudadera1.jpg", 100, 200, 280, 380);
     
     rectangle(500, 200, 680, 460); 
     outtextxy(560, 400, "Sudadera");
     readimagefile("sudadera2.jpg", 500, 200, 680, 380);
     
     rectangle(900, 200, 1080, 460); 
     outtextxy(960, 400, "Sudadera");
     readimagefile("sudadera3.jpg", 900, 200, 1080, 380);
     
     
     rectangle(100, 500, 280, 760); 
     outtextxy(160, 700, "Sudadera");
     readimagefile("sudadera4.jpg", 100, 500, 280, 740);
     
     rectangle(500, 500, 680, 760); 
     outtextxy(560, 720, "Sudadera");
     readimagefile("sudadera5.jpg", 500, 500, 680, 740);
     
     rectangle(900, 500, 1080, 760); 
     outtextxy(960, 720, "Sudadera");
     readimagefile("sudadera6.jpg", 900, 500, 1080, 740);
     }     
     
void Ventana::Chamarras(){
     outtextxy(200, 130, "Chamarras");
     
     rectangle(100, 200, 280, 460); 
     outtextxy(160, 400, "Chamarra");
     readimagefile("chamarra1.jpg", 100, 200, 280, 380);
     
     rectangle(500, 200, 680, 460); 
     outtextxy(560, 400, "Chamarra");
     readimagefile("chamarra2.jpg", 500, 200, 680, 380);
     
     rectangle(900, 200, 1080, 460); 
     outtextxy(960, 400, "Chamarra");
     readimagefile("chamarra3.jpg", 900, 200, 1080, 380);
     
     
     rectangle(100, 500, 280, 760); 
     outtextxy(160, 700, "Chamarra");
     readimagefile("chamarra4.jpg", 100, 500, 280, 740);
     
     rectangle(500, 500, 680, 760); 
     outtextxy(560, 720, "Chamarra");
     readimagefile("chamarra5.jpg", 500, 500, 680, 740);
     
     rectangle(900, 500, 1080, 760); 
     outtextxy(960, 720, "Chamarra");
     readimagefile("chamarra6.jpg", 900, 500, 1080, 740);
     }
     
void Ventana::Accesorios(){
     outtextxy(200, 130, "Accesorios");
     
     rectangle(100, 200, 280, 460); 
     outtextxy(160, 400, "Sticker");
     readimagefile("accesorio1.jpg", 100, 200, 280, 380);
     
     rectangle(500, 200, 680, 460); 
     outtextxy(560, 400, "Lanyard");
     readimagefile("accesorio2.jpg", 500, 200, 680, 380);
     
     rectangle(900, 200, 1080, 460); 
     outtextxy(960, 400, "Poster");
     readimagefile("accesorio3.jpg", 900, 200, 1080, 380);
     
     
     rectangle(100, 500, 280, 760); 
     outtextxy(160, 700, "Sticker");
     readimagefile("accesorio4.jpg", 100, 500, 280, 740);
     
     rectangle(500, 500, 680, 760); 
     outtextxy(560, 720, "Sticker");
     readimagefile("accesorio5.jpg", 500, 500, 680, 740);
     
     rectangle(900, 500, 1080, 760); 
     outtextxy(960, 720, "Sticker");
     readimagefile("accesorio6.jpg", 900, 500, 1080, 740);
     }
