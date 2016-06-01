/*#include <stdio.h>

int main()
{
int a=0; //Declaración de variable entera de tipo entero
int *puntero; //Declaración de variable puntero de tipo entero
puntero = &a; //Asignación de la dirección memoria de a

printf("El valor de a es: %d. \nEl valor de *puntero es: %d. \n",a,*puntero);
printf("La direccion de memoria de *puntero es: %p",puntero);

return 0;
}*/


/*
#include <stdio.h> 

void CambiarValor(int a);

int main(){
    int a=1;
    int *puntero;
    puntero=&a;
    
    CambiarValor(*puntero);
    printf("valor de (a) luego de usar el puntero es %i \n, el valor del *puntero es:%d \n ",a,*puntero);
    
 
}

void CambiarValor (int a){
    a++;
    printf("Valor de a dentro de la funcion: %i\n",a);
    //printf("Valor de puntero dentro de la funcion: %i\n", *puntero)
}

*/

#include <stdio.h>

int main()
{

int array[10]={0,2,3,5,5,6,7,8,9,0}; //Declarar e inicializar un array.
int *puntero = &array[0]; //Le damos la dirección de inicio del array
int i; //variable contadora...

for (i=0;i<10;i++)
printf("%d\n",*(puntero+i)); //imprimimos los valores del puntero.

return 0;
}
