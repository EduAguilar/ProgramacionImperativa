#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contacto {
   char     apellido[50];
   char     nombre[50]; 
   char     direccion[100];
   int      telefono[50];
   int      celular[50];
};


int main(){
    
    int 	i;
    int 	cant=0;
    int 	resp,resp1;
    char 	resp2;
    char	busqxapell[50],busqxnombre[50],busqxdirec[100];
    int		busqxtel[50],busqxcel[50];
    
    
	struct Contacto contactos[50];

	
	do{
	do{
		
		printf("\t\tAgenda de contactos V_1.2\n");
		printf("\t************************************\n");
		printf("\n¿Que desea realizar? Elija entre las siguientes opciones\n1)- Cargar Contactos. \t2)- Mostrar Todos los Contactos.\n3)- Buscar un Contacto.\t4)- Salir.\n");
		scanf("%d",&resp);
	}while(!resp,getchar()!='\n');

	switch(resp){
		
		case 1:
		do{
			system("clear");
			printf("\n¿Cuantos contactos desea agregar?\nPor favor ingrese cantidad: ");
			scanf("%d",&cant);
		}while(!cant,getchar()!='\n');


		printf("Por favor cargue sus contactos:... \n");
	
		for(i=0;i<cant;i++){
			printf("\nIngrese Apellido: ");
			fgets(contactos[i].apellido, 50, stdin);
		
			printf("\nIngrese Nombre: ");
			fgets(contactos[i].nombre, 50, stdin);
		
			printf("\nIngrese Dirección: ");
			fgets(contactos[i].direccion, 100, stdin);
			
			do{
				printf("\nIngrese Teléfono: ");
				scanf("%d",contactos[i].telefono);
			}while(!(contactos[i].telefono),getchar()!='\n');
			
			do{
				printf("\nIngrese Celular: ");
				scanf ("%d",contactos[i].celular);	
			}while(!(contactos[i].celular),getchar()!='\n');
		    
		system("clear");
		}
		
		break;
	
		case 2:
			system("clear");
			printf("Sus contactos que cargo son los siguientes: \n");
			for(i=0;i<cant;i++){
				printf("\nContacto nº %d: \n",i+1);
				printf("****************************\n");
				printf( "Apellido: %s", contactos[i].apellido);
   				printf( "Nombre: %s", contactos[i].nombre);
   				printf( "Direccion: %s", contactos[i].direccion);
   				printf( "Telefono: %d\n", *contactos[i].telefono);
   				printf( "Celular: %d\n", *contactos[i].celular);
			}
		break;
		
		case 3:
			do{
				system("clear");
				printf("¿Como desea buscar su contacto?\nElija entre las siguientes opciones(numeros)\n");
				printf("1)- Por Apellido \t2)- Por Nombre \t3)- Por Dirección \n4)- Por Teléfono \t5)- Por Celular \n");
				scanf("%d",&resp1);
			}while(!resp1,getchar()!='\n',resp1<1||resp1>5);
		
			switch(resp1){
				
				case 1:
				printf("Ingrese Apellido a buscar: \n");
				fgets(busqxapell,50,stdin);
				
				for(i=0;i<cant;i++){

					if(strcmp(busqxapell,contactos[i].apellido) == 0){
						printf("\nContacto nº %d: \n",i+1);
						printf("****************************\n");
						printf( "Apellido: %s", contactos[i].apellido);
   						printf( "Nombre: %s", contactos[i].nombre);
   						printf( "Direccion: %s", contactos[i].direccion);
   						printf( "Telefono: %d\n", *contactos[i].telefono);
   						printf( "Celular: %d\n", *contactos[i].celular);
					} 
				}

				break;
				
				case 2:
				printf("Ingrese Nombre a buscar: \n");
				fgets(busqxnombre,50,stdin);

				for(i=0;i<cant;i++){
					if(strcmp(busqxnombre,contactos[i].nombre) == 0){
						printf("\nContacto nº %d: \n",i+1);
						printf("****************************\n");
						printf( "Apellido: %s", contactos[i].apellido);
   						printf( "Nombre: %s", contactos[i].nombre);
   						printf( "Direccion: %s", contactos[i].direccion);
   						printf( "Telefono: %d\n", *contactos[i].telefono);
   						printf( "Celular: %d\n", *contactos[i].celular);
					} 
				}

				break;
				
				case 3:
				printf("Ingrese Dirección a buscar: \n");
				fgets(busqxdirec,100,stdin);

				for(i=0;i<cant;i++){
					if(strcmp(busqxdirec,contactos[i].direccion) == 0){
						printf("\nContacto nº %d: \n",i+1);
						printf("****************************\n");
						printf( "Apellido: %s", contactos[i].apellido);
   						printf( "Nombre: %s", contactos[i].nombre);
   						printf( "Direccion: %s", contactos[i].direccion);
   						printf( "Telefono: %d\n", *contactos[i].telefono);
   						printf( "Celular: %d\n", *contactos[i].celular);
					} 
				}				
				
				break;
				
				case 4:
				do{
					printf("\nIngrese Telefono a buscar: \n");
		    		scanf ("%d",&busqxtel);
		    	}while(!busqxtel,getchar()!='\n');
		    	
				for(i=0;i<cant;i++){
					if(strcmp(busqxtel,contactos[i].telefono) == 0){
						printf("\nContacto nº %d: \n",i+1);
						printf("****************************\n");
						printf( "Apellido: %s", contactos[i].apellido);
   						printf( "Nombre: %s", contactos[i].nombre);
   						printf( "Direccion: %s", contactos[i].direccion);
   						printf( "Telefono: %d\n", *contactos[i].telefono);
   						printf( "Celular: %d\n", *contactos[i].celular);
					} 
				}		
				
				break;
				
				case 5:
				do{
					printf("\nIngrese Celular a buscar: \n");
		    		scanf ("%d",busqxcel);
		    	}while(!busqxcel,getchar()!='\n');
				
				for(i=0;i<cant;i++){
					if(strcmp(busqxcel,contactos[i].celular) == 0){
						printf("\nContacto nº %d: \n",i+1);
						printf("****************************\n");
						printf( "Apellido: %s", contactos[i].apellido);
   						printf( "Nombre: %s", contactos[i].nombre);
   						printf( "Direccion: %s", contactos[i].direccion);
   						printf( "Telefono: %d\n", *contactos[i].telefono);
   						printf( "Celular: %d\n", *contactos[i].celular);
					} 
				}		
				
				break;
				
				default: break;
			}
		
		break;
		
		default:break;

	}
	}while(resp!=4);
	printf("\n Muchas gracias, Hasta Pronto");
}