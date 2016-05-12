#include <stdio.h>
#include <stdlib.h>


void main (){
    
    int i,j,tam,resp2,aux1=0;;
    int numeros[tam];
    char resp,aux,letras[tam];
    
    
    
    do{
    	system("clear");
    	printf("\t\t ORDENAMIENTO DE ARRAY CON INGRESO DE NUMEROS Y LETRAS\n");
    	printf("\t\t-------------------------------------------------------\n");
    	printf("\n Cuantos elementos desea agregar a su array, ingrese cantidad en numero:\n");
    	scanf("%d",&tam);
    	getchar();
    }while(!tam);
    
    
    do{
        printf("¿Desea ordenar un array de numeros o de letras?\n \t\t N=NUMEROS || L=LETRAS \n");
        scanf("%c",&resp);
        getchar();
        system("clear");
    }while(resp != 'n'&& resp != 'N' && resp != 'l' && resp != 'L');
    
    
    if(resp== 'n' || resp== 'N'){
    
	    printf("Por favor ingrese %d numeros de a uno a la vez\n",tam);
    	for(i=0;i<tam;i++){
        	do{
            	do{
            	printf("ingrese numero:");
            	scanf("%i",&numeros[i]);
            	system("clear");
            	}while(getchar()!= '\n');
        	}while(!numeros[i]);
    	}
        printf("Su array de numeros es: \n");
    	for(i=0;i<tam;i++){
        	printf("%d \t",numeros[i]);
    	}
    	
    	do{
    	    do{
    	        printf("\nComo desea ordenar su array... \n 1) De menor a mayor \t 2) De mayor a menor. \n");
                scanf("%i",&resp2); 
    	    }while(getchar()!= '\n');    
        }while(resp2!=1&&resp2!=2);
        
        if (resp2==1){
            printf("\nSu array de numeros ordenados de menor a mayor es: \n");
            for (i=0; i<tam;i++){
                for(j=i; j<tam;j++){
                    if (numeros[i]>numeros[j]){
                        aux1=numeros[i];
                        numeros[i]=numeros[j];
                        numeros[j]=aux1;
                    }
                }
            printf("%d ",numeros[i]);
            }
        
        }else{
            printf("\nSu array de numeros ordenados de mayor a menor es: \n");
            for (i=0; i<tam;i++){
                for(j=i; j<tam;j++){
                    if (numeros[i]<numeros[j]){
                        aux=numeros[i];
                        numeros[i]=numeros[j];
                        numeros[j]=aux;
                    }
                }
                printf("%d ",numeros[i]);
            }
        }
    	

    }else{
        printf("Por favor ingrese %d letras de a una a la vez\n",tam);
    	for(i=0;i<tam;i++){
        do{
            do{
            printf("ingrese letra:");
            scanf("%c",&letras[i]);
            system("clear");
            }while(getchar()!= '\n');
        }while(letras[i]=='0'||letras[i]=='1'||letras[i]=='2'||letras[i]=='3'||letras[i]=='4'||letras[i]=='5'||letras[i]=='6'||letras[i]=='7'||letras[i]=='8'||letras[i]=='9');
        }
    printf("Su array de letras es: \n");
    for(i=0;i<tam;i++){
        printf("%c \t",letras[i]);
    }
    
    do{
        do{
            printf("\nComo desea ordenar su array... \n 1) De menor a mayor \t 2) De mayor a menor. \n");
            scanf("%i",&resp2); 
        }while(getchar()!= '\n');    
    }while(resp2!=1&&resp2!=2);
        
        if (resp2==1){
            printf("\nSu array de letras ordenadas de menor a mayor es: \n");
            for (i=0; i<tam;i++){
                for(j=i; j<tam;j++){
                    if (letras[i]>letras[j]){
                        aux=letras[i];
                        letras[i]=letras[j];
                        letras[j]=aux;
                    }
                }
            printf("%c ",letras[i]);
            }
        
        }else{
            printf("\nSu array de letras ordenadas de mayor a menor es: \n");
            for (i=0; i<tam;i++){
                for(j=i; j<tam;j++){
                    if (letras[i]<letras[j]){
                        aux=letras[i];
                        letras[i]=letras[j];
                        letras[j]=aux;
                    }
                }
                printf("%c ",letras[i]);
            }
        }
    }
}