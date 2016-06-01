#include <stdio.h>

int main(){

int *puntero[5]; //array de puntero
int a[5][5]; //Array bidimensional.
int i,j; 

for (i=0;i<5;i++){
    for(j=0;j<5;j++){
       a[i][j]=1+i;
    }
}

for (i=0;i<5;i++)
puntero[i]=a[i]; //Asignamos las filas al puntero.

//Pueden imprimir tambien en un ciclo
//Tambien pueden acceder mediante un ciclo anidado a la variables del puntero[i][j]

    
for (i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("%d ",puntero[i][j]);
    }
    printf("\n");    
    
}


}