#include <stdio.h>
#include "sumar.h"
int main (int argc, char *argv[]) 

{   int a, b;
    printf("Ingrese 1er numero: ");
    scanf("%d", &a);
    printf("Ingrese 2er numero: ");
    scanf("%d", &b);
    printf ("%d ",sumar(a,b));
    return 0;
    
}   
    
