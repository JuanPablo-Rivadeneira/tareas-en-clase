/******************************************************************************

4. Los organizadores de un acto electoral solicitaron realizar un programa para manejar el conteo de votos. En la elección hay cinco candidatos, los cuales se representan con los valores comprendidos entre 1 y 5. El programa debe obtener el número de votos de cada candidato y el porcentaje que obtuvo respecto al total de los votantes. Se ingresa los votos  de manera desordenada, el final de ingreso de los votos se representa por un cero.

Ejemplo

 INGRESO DE VOTOS:

2 5 5 4 3 5 1 2 4 3 1 2 4 5 0

2 representa un voto para el candidato2

5 representa un voto para el candidato5

4 representa un voto para el candidato4

*******************************************************************************/
#include<stdio.h>

void main(void)

{
int votos=0,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,totalVotos=0;
float prom1=0,prom2=0,prom3=0,prom4=0,prom5=0;

printf("Introduzca su voto: ");
scanf("%d",&votos);

while(votos>0)
{
if(votos==1)
    {
        cont1++;
    }
    else
        if(votos==2)
            {
                cont2++;
            }
            else
                if(votos==3)
                    {
                        cont3++;
                    }
                    else
                        if(votos==4)
                            {
                                cont4++;
                            }
                            else
                                if(votos==5)
                                    {
                                        cont5++;
                                    }
                                    else
                                        printf("\nEl voto está fuera de rango");

printf("\nIntroduzca su voto de nuevo: ");
scanf("%d",&votos);


}
totalVotos=cont1+cont2+cont3+cont4+cont5;

prom1=cont1*(100/totalVotos);
prom2=cont2*(100/totalVotos);
prom3=cont3*(100/totalVotos);
prom4=cont4*(100/totalVotos);
prom5=cont5*(100/totalVotos);
printf("\nVotos del candidato 1 y porcentaje: %d %.1f",cont1,prom1);
}