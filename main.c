/*
realizar un programa en c que determine el area de un circulo.
*/
#include <stdio.h> //definicion de biblioteca
#define pi 3.1416 //definicion constante pi

void main()//definicion de la funcion principaL
{//inicio
float radio, area=0; //declaracion de variables
printf ("ingrese el radio:");//salida en pantalla 
scanf("%f,&radio");//lectura de la variable radio
area=pi*pow(radio,2);//proceso
printf("el area es %.2f,area");//salida del valor de la variable area
}//fin