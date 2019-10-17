/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int num,cont=1;
    printf("Cuantos numero va ingresar:");
    scanf("%d",&num);
    while(cont<=num)
    {
        printf("%d\n",cont);
        cont++;
    }
}
