 /* Crear un programa llamado paresImpares que cree un array de 100 números aleatorios del 1 al 1000. 
 Una vez creado, mostrar el contenido y después organizarlo de forma que estén juntos los elementos pares y los impares. 
 Después, volver a mostrar el array
 */
#include <stdio.h>//libreria de entrada y salida
#include <stdlib.h>//libreria para poder usar rand
#include <time.h> //libreria par usar el reloj de la maquina, me hace posible usar la funcion srand

#define TAM 100 //Defino una Constante

void armarArray(int array[TAM], int i); //declaro una función que utilizare luego en mi main
void escribirArray(int a[], int tamanio);
 
int main(){

    int arrayinicial[TAM];
    int par[TAM]={0};
    int impar[TAM]={0};
    int i,j;
    
    printf("\t\t\t Ejercicio con array numeros pares y numeros impares \n");
    printf("\t\t\t *************************************************** \n");
    

    srand(time(NULL));//planta una nueva semilla, para no repetir los mismos valores aleatorios en un
                     //random
                     
    /*Se carga el array inicial con valores aleatorios*/
    for(i=0;i<TAM;i++){
        arrayinicial[i]=rand()%100+1;  //el rand me dará valores aleatorios entre 1 y 100 
                                      //si quisiera que me incluya el 0 entonces deberia quitar el +1
    }
    
    
    //Se imprime el array Inicial.
    printf("\n Primer array:\n");
    escribirArray(arrayinicial,TAM);

    
    //se cargan los valores para la matriz par y la matriz impar.
    for(i=0;i<TAM;i++){

        if(arrayinicial[i]%2==0)//condición si el resto de 2 es 0 entonces es par y se le pasa valores al array.

            par[i]=arrayinicial[i];

        else

            impar[i]=arrayinicial[i];//si no es par entonces se cargan valores al array impar.

    }

    //Se imprimen los array por separado
    printf("\n\n Array Par:\n");
    escribirArray(par,TAM);
    printf("\n\n Array Impar:\n");
    escribirArray(impar,TAM);

    
    j=0;
  
    //se carga, se pasan, los valores de la matriz par (distintos de 0) al array principal.
    for(i=0;i<TAM;i++){

        if(par[i]!=0) {

            arrayinicial[j]=par[i];
            j++;
        }
    }

    //se carga, se pasan, los valores de la matriz impar (distintos de 0) al array principal.
    for(i=0;i<TAM;i++){

        if(impar[i]!=0) {

            arrayinicial[j]=impar[i];
            j++;
        }
    }

    //Se imprime la matriz resultado, ordenada con los numero pares primero seguido de los impares
    printf("\n\n Array final:\n");
    escribirArray(arrayinicial,TAM);
} 


//Función para escribir en pantalla el array.
void escribirArray(int a[], int tamanio){

    int i;
    for(i=0;i<tamanio;i++){

        printf("%d ",a[i]);

    }

}