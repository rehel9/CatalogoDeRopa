#ifndef _VENTANA_H_
#define _VENTANA_H_

class Ventana{
      private:
              int altura;
              int ancho;
                   
              int xm, xy;
      public:
             Ventana();
             void PantallaInicial();
             void Muestra();
             void Encabezado(bool &inicio);
      };


#endif
