/******************************************************************************

1)Una empresa dedicada a la venta de localidades por teléfono e Internet maneja seis tipos de
localidades para un circo ubicado en la zona sur de la Ciudad de México. Algunas de las zonas
del circo tienen el mismo precio, pero se manejan diferente para administrar eficientemente
la asignación de los asientos. Los precios de cada localidad y los datos referentes a la venta de
boletos para la próxima función se manejan de la siguiente forma:
Datos: l1, l2, l3, l4, l5 y l6
cla1, can1
cla2, can2
. . . . . .
0 , 0
Donde: l1, l2, l3, l4, l5 y l6 son variables de tipo real que representan los precios de las
diferentes localidades.
clai y cani son variables de tipo entero que representan el tipo de localidad y la cantidad de
boletos, respectivamente, de la venta i.

2)Construye un programa en C que, al recibir como dato un entero positivo, escriba todos los
números perfectos que hay entre 1 y el número dado, y que además imprima la cantidad de
números perfectos que hay en el intervalo. Un número se considera perfecto si la suma de
todos sus divisores es igual al propio número.
Dato: num (variable de tipo entero que representa al número límite que se ingresa).


*******************************************************************************/
#include <stdio.h>

int main()
{
   float l1=20,l2=40,l3=60,l4=80,l5=100,l6=120;
   int localidad1,cla1=0,cantidad_localidad1,can1=0,localidad2,cla2=0,cantidad_localidad2,can2=0,localidad3,cla3=0,cantidad_localidad3,can3=0,localidad4,cla4=0,cantidad_localidad4,can4=0,localidad5,cla5=0,cantidad_localidad5,can5=0,localidad6,cla6=0,cantidad_localidad6,can6=0,localidad,total_recaudo_dinero,voletos_totales_por_cada_localidad;
  printf("\n ingrese el valor a pagar por su localidad loaclidad1=20$ localidad2=40$ localidad3=60$ localidad4=80$ localidad5=100$ localidad6=120$");
  scanf("%i",&localidad);
  if(localidad==20){
    printf("su localidad es la numero 1");
    localidad1=cla1+1;
    cantidad_localidad1=can1+20;
     printf("\n El recaudo total de dinero por la compra: %i y los voletos vendidos por cada localidad es: %i",cantidad_localidad1,localidad1);
  }
  else{
      if(localidad==40){
          printf("su localidad es la numero 2");
          localidad2=cla2+1;
          cantidad_localidad2=can2+40;
           printf("\n El recaudo total de dinero por la compra: %i y los voletos vendidos por cada localidad es: %i",cantidad_localidad2,localidad2);
      }
      else{
          if(localidad==60){
              printf("su localidad es la numero 3");
              localidad3=cla3+1;
              cantidad_localidad3=can3+60;
               printf("\n El recaudo total de dinero por la compra: %i y los voletos vendidos por cada localidad es: %i",cantidad_localidad3,localidad3);
          }
          else{
              if(localidad==80){
              printf("su localidad es la numero 4");   
              localidad4=cla4+1;
              cantidad_localidad4=can4+80;
               printf("\n El recaudo total de dinero por la compra: %i y los voletos vendidos por cada localidad es: %i",cantidad_localidad4,localidad4);
              } 
              else{
                  if(localidad==100){
                  printf("su localidad es la numero 5"); 
                  localidad5=cla5+1;
                  cantidad_localidad5=can5+100;
                   printf("\n El recaudo total de dinero por la compra: %i y los voletos vendidos por cada localidad es: %i",cantidad_localidad5,localidad5);
                  }
                  else{
                      if(localidad==120){
                          printf("su localidad es la numero 6");
                          localidad6=cla6+1;
                          cantidad_localidad6=can6+110;
                          printf("\n El recaudo total de dinero por la compra: %i y los voletos vendidos por cada localidad es: %i",cantidad_localidad6,localidad6);
                      }
                  }
              }
          }
            
      }
  }
 

   
   

    return 0;
}
