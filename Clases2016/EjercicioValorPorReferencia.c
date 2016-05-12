#include <stdio.h>

void sumar_valor(int numero); /*prototipo de la funcion*/
int main(void)
{
    int numero = 57; /*definimos numero con valor 57*/
    
    sumar_valor(numero); /*enviamos numero a la funcion*/
    
    printf("valor del numero dentro del main() es: %d\n", numero);
    /*podemos notar que el valor de numero se modifica 
    solo dentro de la funcion sumar_valor pero en la principal
    numero sigue valiendo57*/
    
    return 0;
}

void sumar_valor(int numero)
{
    numero++; /*le sumamos 1 al numero*/
    
    /*el valor de numero recibido se aumenta en 1
    y se modifica dentro de la funcion sumar_valor()
    */
    printf ("el valor del numero dentro de la funcion sumar_valor() es: %d\n",numero);
    return;

}