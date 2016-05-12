#include <stdio.h>
#include <stdlib.h>

int array[]={11,13,24,10,7,30,1};
int tam = 7;
int aux;
int i,j=0;

void main() {
        
    printf("Array inicial: \n");
    for (i=0;i<tam;i++){
        printf("%i \t",array[i]);
    }
    
    //Ordenamiento método burbuja de menor a mayor
    for (i=0; i<tam;i++){
        for(j=i; j<tam;j++){
            if (array[i]>array[j]){
            aux=array[i];
            array[i]=array[j];
            array[j]=aux;
            }
        }
        
    }
    
    printf("\n\nArray ordenado de menor a mayor: \n");
    for (i=0;i<tam;i++){
         printf("%i\t",array[i]);
    }
    //Ordenamiento método burbuja de mayor a menor
    for (i=0; i<tam;i++){
        for(j=i; j<tam;j++){
            if (array[i]<array[j]){
            aux=array[i];
            array[i]=array[j];
            array[j]=aux;
            }
        }
    }
    printf("\n\nArray ordenado de mayor a menor: \n");
    for (i=0;i<tam;i++){
         printf("%i\t",array[i]);
    }  
}