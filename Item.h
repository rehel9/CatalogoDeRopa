#ifndef _ITEM_H_
#define _ITEM_H_

#include "Ventana.h"

class Item : public Ventana{
      private:
              char nombre[50];
              char foto[50];
              
              bool ciclo;
              
      public:
             
             Item(char nombre[50], char foto[50], float precio);
             void IniciarVentana(char nombre[50]);
             void ModificarVarPrivadas(int altura, int ancho);
      };


#endif
