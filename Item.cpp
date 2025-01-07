#include "Item.h"
#include <graphics.h>
#include <string.h>

void Item::IniciarVentana(char nombre[50]){
                ventanaActual = initwindow( 640 , 480 , nombre, 640, 480, false, false);
                setcurrentwindow(ventanaActual); 
     }

Item::Item(char nombre[50], char foto[50], float precio){
                
                ModificarVarPrivadas(640, 480);
                  
                strcpy(this->nombre, nombre);
                strcpy(this->foto, foto);
                
                ciclo = true;
                
                IniciarVentana("a");
                
                do {
                    rectangle(0, 0, 180, 260); 
                    outtextxy(160, 180, "Playera");
                    readimagefile("playera1.jpg", 0, 0, 180, 180);
                    
                    rectangle(100, 400, 280, 460); 
                    outtextxy(160, 420, "Salir");
                    if (ismouseclick(WM_LBUTTONDOWN)) {
                       getmouseclick(WM_LBUTTONDOWN, xm, xy);
     
                       if (xm < 280 && xm > 100 && xy < 460 && xy > 200) {
                              ciclo = false;
                              closegraph(CURRENT_WINDOW);
                              setcurrentwindow(0);
                              }
                       }
                } while (ciclo);  
                }

void Item::ModificarVarPrivadas(int altura, int ancho){
     SetearVarPrivadas(altura, ancho);
     }
