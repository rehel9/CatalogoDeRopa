#include "Ventana.cpp"
#include <graphics.h>

Ventana::Ventana(){
                   altura = 720;
                   ancho = 1280;
                   initwindow( ancho , altura , "Catalogo de Ropa" );
                   
                   }

void Ventana::PantallaInicial(){
                           void pantallaInicial() {
                           cleardevice();
                           setcolor(WHITE);
                           setlinestyle(0, 1, 3);
                           rectangle(500, 300, 780, 360); 
                           outtextxy(560, 320, "INICIAR");
                           outtextxy(450, 250, "BIENVENIDO A LA TIENDA DE ROPA");
}}
