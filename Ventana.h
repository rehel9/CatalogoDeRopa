#ifndef _VENTANA_H_
#define _VENTANA_H_

class Ventana{
      private:
              int altura;
              int ancho;
              
              int categoriaActual;
              
              int ventanaUno;
              
              bool inicio;
                   
              
              
              float precio[6];
      public:
             Ventana();
             void IniciarPantalla();
             void PantallaInicial();
             void Muestra();
             void Encabezado(bool &inicio);
             void Playeras();
             void Sudaderas();
             void Accesorios();
             void Chamarras();
             void SetearVarPrivadas(int altura, int ancho);
             int ventanaActual;
             
             int xm, xy;
      };


#endif
