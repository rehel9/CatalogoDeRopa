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
    outtextxy(Z - 3 * (Z / 4), 60, "Pantalones");
    rectangle(950, 50, 1060, 90);
    outtextxy(Z - (Z / 4), 60, "Shorts");
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
            }
            if (xm < 510 && xm > 300 && xy < 90 && xy > 50) {
                cleardevice();
                getch();
                Encabezado(inicio);
            }
            if (xm < 1060 && xm > 950 && xy < 90 && xy > 50) {
                cleardevice();
                getch();
                Encabezado(inicio);
            }
            if (xm < 1260 && xm > 1150 && xy < 90 && xy > 50) {
                cleardevice();
                getch();
                Encabezado(inicio);
            }
            if (xm < 150 && xm > 90 && xy < 150 && xy > 120) {
                PantallaInicial();
                inicio = false;
            }
        }
    }
     }
