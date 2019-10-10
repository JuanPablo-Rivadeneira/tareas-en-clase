/******************************************************************************

5. En un laboratorio de análisis clínico, un médico determina si una persona tiene anemia o no, lo cual depende de su nivel de hemoglobina en la sangre, de su edad y de su género. Si el nivel de hemoglobina que tiene una persona es menor que el rango que le corresponde, se determina su resultado como positivo y en caso contrario como negativo. La tabla en la que el medico se basa para obtener el resultado para sexo femenino es la siguiente:

EDAD        NIVEL HEMOGLOBINA
0 entre 1 mes                        entre 13 y 26 g%
> 1 y < = 6 meses                  entre 10 y 18 g%
> 6 y < = 12 meses                  entre 11 y 15 g%
> 1 y < = 5  años                        entre 11.5 y 15 g%
> 5 y < = 10 años                             entre 12.6 y 15.5 g%
> 10 y < = 15 años                           entre 13 y 15.5 g%
 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float edad_en_meses, nivel_de_hemoglobina, rango_menor;
    printf ("Ingrese el valor de edad en meses: ");
    scanf ("%f", &edad_en_meses);
    (void) getchar ();
    printf ("Ingrese el valor de nivel de hemoglobina: ");
    scanf ("%f", &nivel_de_hemoglobina);
    (void) getchar ();
    rango_menor=0;
    if(edad_en_meses<=1)
        rango_menor=13;
    if(edad_en_meses>1&&edad_en_meses<=6)
        rango_menor=10;
    if(edad_en_meses>6&&edad_en_meses<=12)
        rango_menor=11;
    if(edad_en_meses>12&&edad_en_meses<=60)
        rango_menor=11.5;
    if(edad_en_meses>30&&edad_en_meses<=120)
        rango_menor=12.6;
    if(edad_en_meses>120&&edad_en_meses<=180)
        rango_menor=13;
    if(nivel_de_hemoglobina<rango_menor)
        printf ("Positivo en anemia\n");
    else
        printf ("Negativo en anemia\n");
    printf ("Valor de rango menor: %g\n", rango_menor);
    putchar ('\n');
    system ("pause");
    return EXIT_SUCCESS;
}