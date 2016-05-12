/*******************************************************************************/
/* Crear un programa que mediante un menú admita reservar o cancelar asientos de un avión, 
/* así como mostrar qué asientos están ocupados y libres actualmente.
/*
/* El array tendrá 25 filas y 4 columnas
/*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define cantfilas 4
#define cantcolumnas 25

char asientos[cantfilas][cantcolumnas];

int i,columna=0;
char fila,resp,resp2;

int main(){
	
	do{
	//armo y cargo matriz con los valores iniciales en 0 como asientos libres
	for(fila='A';fila<'E';fila++){
    	for (columna=0;columna<cantcolumnas;columna++){
			asientos[fila][columna]='0';
		}
	}

	
	do{
		printf("\n  Aerolineas Aguilar Eduardo - Reserva de asientos disponibles en Avion\n\n");
		printf("\t\t Por favor elija su asiento a reservar \n\n\t referencia: x = Asiento OCUPADO  ||  0 = Asiento DISPONIBLE \n\n");
		
		//imprimo matriz
		printf("Columnas| ");
		for (i=1;i<26;i++){
			printf(" %d",i);
		}
		printf("\n--------|------------------------------------------------------------------");	
		printf("\nFilas\t|------------------------------------------------------------------\n");
	
    	for(fila='A';fila<'E';fila++){
    		printf("  %c\t| ",fila);
    
			for (columna=0;columna<cantcolumnas;columna++){
				
				if (columna<10)
					printf(" %c",asientos[fila][columna]);
				else
					printf("  %c",asientos[fila][columna]);
			}
			printf("\n");
		}
		
		//doy a elegir el asiento por fila y columna
		do{
		do{
			printf("\nIndique Fila (A - B - C - D)\n\t SOLO MAYUSCULAS\n");
			scanf("%c",&fila);
			getchar();
		}while(fila<'A' || fila>'D');
		
		
		do{
			printf("\nIndique Columna (1 a 25)\n");
			scanf("%i",&columna);
			getchar();
			
		}while(columna<1 || columna>25);
		
		if((asientos[fila][columna-1]=='X')){
			printf("\n El asiento elegido se encuentra OCUPADO.\n \tPor favor vuelva a intentarlo.\n");
		}
		
		}while(asientos[fila][columna-1]=='X');
		
		asientos[fila][columna-1]='X';
		
		printf("\n Ha reservado el asiento de la FILA (%c) COLUMNA (%i) \n",fila,columna);
		
		do{
			printf("\n¿Desea reservar otro asiento?\n \t s=SI || n=NO\n");
			scanf("%c",&resp);
			getchar();
		}while(resp!='s'&&resp!='S'&&resp!='n'&&resp!='N');
		system("clear");
	}while(resp=='s'||resp=='S');
	
	printf("\n¿Quiere liberar todos los asientos para un nuevo vuelo?\n \t s=SI || n=NO\n");
	scanf("%c",&resp2);
	}while(resp2=='s'||resp2=='S');
	
	printf("\n Hasta pronto, Muchas gracias por confiar en nuestros servicios.");
	
}
