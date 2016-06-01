#include <stdio.h> 
#include <stdlib.h>
#include <time.h>



//Declaro funciones para numeros
int busquedaBinaria(int vector[], int n, int dato);
int busquedaSimple(int  vector[], int n, int dato);
//Declaro funciones para letras
int busquedaBinariaLetras(char vector[], int n, char dato);
int busquedaSimpleLetras(char  vector[], int n, char dato);

int main(){
    
    int     i,j,tam=0;
    int     resp,aux,datobuscado;
    int     numeros[tam];
    char    resp1,aux1,datobuscado1;
    char    letras[tam];

    
    srand(time(NULL));//planta una nueva semilla, para no repetir los mismos valores aleatorios en un
                     //random
    
    do{
    	printf("\n Cuantos elementos desea agregar a su array, ingrese cantidad en numero:\n");
    	scanf("%d",&tam);
    	getchar();
    }while(!tam);

    do{
        printf("Que desea buscar? \n Numeros = N  ||  Letras = L \n");                 
        scanf("%c",&resp1);
        getchar();
        system("clear");
    }while(resp1!='n' && resp1!='N' && resp1!='l' && resp1!='L');
    
    
    if(resp1=='n'||resp1=='N'){
        
        /*Se carga el array inicial con valores aleatorios*/
        for(i=0;i<tam;i++){
            numeros[i]=rand()%100+1;  //el rand me dará valores aleatorios entre 1 y 100 
                                      //si quisiera que me incluya el 0 entonces deberia quitar el +1
        }
        printf("Su array inicial de numeros es: \n");
    	for(i=0;i<tam;i++){
        	printf("%d \t",numeros[i]);
    	}
        printf("\nIngrese el dato a buscar: \n");
        scanf("%i",&datobuscado);
    
        do{
        printf("como desea buscar su dato por método binario(1) o secuencial(2)?");
        scanf("%i",&resp);
        getchar();
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

    }else{
        
        /*Se carga el array inicial con valores aleatorios*/
        for(i=0;i<tam;i++){
            letras[i]='A'+rand()%(('Z'-'A')+1);  //el rand me dará valores aleatorios entre 1 y 100 
                                      //si quisiera que me incluya el 0 entonces deberia quitar el +1
        }
        printf("Su array inicial de letras es: \n");
        for(i=0;i<tam;i++){
            printf("%c \t",letras[i]);
        }
            
        printf("\nIngrese el dato a buscar: \n");
        scanf("%c",&datobuscado1);
    
        do{
            printf("como desea buscar su dato por método binario(1) o secuencial(2)?");
            scanf("%i",&resp);
            getchar();
        }while(resp!=1 && resp!=2);
    
    
        if(resp==1){
   
        for (i=0; i<tam;i++){
            for(j=i; j<tam;j++){
                if (letras[i]>letras[j]){
                aux1=letras[i];
                letras[i]=letras[j];
                letras[j]=aux1;
                }
            }
        }
    busquedaBinariaLetras(letras, tam,datobuscado1);
    
    }else{
    busquedaSimpleLetras(letras, tam,datobuscado1);
    }
    printf("\nArray de letras final: \n");
        for (i=0;i<tam;i++){
        printf("%c \t",letras[i]);
    }
    }
}


//Funciones para numeros:

//Busqueda Binaria o Dicotomica es conveniente usar cuando el array es grande y debe estar ordenado. 
int busquedaBinaria(int vector[], int n, int dato) {
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

//Funciones para letras:

//Busqueda Binaria o Dicotomica es conveniente usar cuando el array es grande y debe estar ordenado. 
int busquedaBinariaLetras(char vector[], int n, char dato) {
   int centro,inf=0,sup=n-1;
   
   while(inf<=sup){
      centro=((sup-inf)/2)+inf;
      if(vector[centro]==dato)  
            return printf("\nSu dato (%c) se ha encontrado en la posicion: %i del vector ordenado\n   ",dato,centro);
      else if(dato < vector[centro]) 
            sup=centro-1;
      else  inf=centro+1;
   }
   return printf("\nSu dato no se ha encontrado\n");
}


//Busqueda Secuencial o Simple es comparativa, conviene usarlo cuando el array es chico
int busquedaSimpleLetras(char  vector[], int n, char dato) {

    int i;

    for(i=0; i<n; i++){
        if(dato==vector[i]) {
            return printf("\nSu dato (%c) se ha encontrado en la posicion %i \n",dato,i);
            break;
        }
    }
    return -1;

}