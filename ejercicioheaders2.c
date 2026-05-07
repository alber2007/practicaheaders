#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "division.h"
int main (int argc, char *argv[]) 

{   int a, b;
    printf("Ingrese 1er numero: ");
    scanf("%d", &a);
    printf("Ingrese 2er numero: ");
    scanf("%d", &b);
    printf ("%d ",sumar(a,b));
    printf ("%d",restar(a,b));
    printf ("%d",multiplicar(a,b));
    printf ("%d",dividir(a,b));
    return 0;
    
}   
    
