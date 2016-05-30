#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 

int i,j=0;
int tam=5;
int datobuscado,resp,aux;
int numeros[]={13,11,22,1,7};

int busquedaBinaria(int  vector[], int n, int dato);
int busquedaSimple(int  vector[], int n, int dato);


int main(){

    
    printf("\nSu array inicial para su busqueda es: \n");
        for (i=0;i<tam;i++){
        printf("%i \t",numeros[i]);
    }
    
    printf("\nIngrese el dato a buscar: \n");
    scanf("%i",&datobuscado);
    
    do{
    printf("como desea buscar su dato por método binario(1) o secuencial(2)?");
    scanf("%i",&resp);
    break;
    }while(resp!=1 && resp!=2);
    
    
    if(resp==1){
   
    for (i=0; i<tam;i++){
        for(j=i; j<tam;j++){
            if (numeros[i]>numeros[j]){
            aux=numeros[i];
            numeros[i]=numeros[j];
            numeros[j]=aux;
            }
        }
    }
    
    busquedaBinaria(numeros, tam,datobuscado);
   
    }else{
    busquedaSimple(numeros, tam,datobuscado);
    }
    printf("\nArray numeros final: \n");
        for (i=0;i<tam;i++){
        printf("%i \t",numeros[i]);
    }
}


//Funciones

//Busqueda Binaria o Dicotomica es conveniente usar cuando el array es grande y debe estar ordenado. 
int busquedaBinaria(int  vector[], int n, int dato) {
   int centro,inf=0,sup=n-1;
   
   while(inf<=sup){
      centro=((sup-inf)/2)+inf;
      if(vector[centro]==dato)  
            return printf("\nSu dato (%i) se ha encontrado en la posicion: %i del vector ordenado\n   ",dato,centro);
      else if(dato < vector[centro]) 
            sup=centro-1;
      else  inf=centro+1;
   }
   return printf("\nSu dato no se ha encontrado\n");
}


//Busqueda Secuencial o Simple es comparativa, conviene usarlo cuando el array es chico
int busquedaSimple(int  vector[], int n, int dato) {

    int i;

    for(i=0; i<n; i++){
        if(dato==vector[i]) {
            return printf("\nSu dato (%i) se ha encontrado en la posicion %i \n",dato,i);
            break;
        }
    }
    return -1;

}
