/*
                Examen de Programación Imperativa 1 de Julio 2016 
                
Realizar los siguientes puntos de forma iterativa incremental, comitiando en cada caso.

1)
a- Implementar una estructura de datos Libros

 	ID
	Nombre
	Autor
	Categoria
	
b- Mostrar Menú de opciones 

	1- Ingresar nuevo libro
	2- Listar Libros
	X- Salir

c- Implementar funciones para la la salida en pantalla

2) Usar archivo de texto como base de datos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Defino una estructura tipo Libro con sus determinados campos de variables
struct Libro {
   int     ID[50];
   char    nombre[50]; 
   char    autor[100];
   char    categoria[50];
};

//Declaro la estructura que voy a utilizar Libros de tipo Libro
struct Libro Libros[50];

//Declaracion de Funciones
void IngresoDeLibros(int cant);
void ListarLibros(int i);
void GuardarEnBD(int cant);

//Declaración de variables
char 	resp,resp2;
int		i,cant=0;

FILE *archivo;

int main(){

	do{
		do{
			printf("\n\t\tMenú - Sistema de Libros\n");
			printf("\t*****************************************\n");
			printf("\nElija entre las siguientes opciones\n\n1)- Ingresar Nuevo Libro (1). \n2)- Listar Libro (2).\nX)- Salir (X).\n");
			scanf("%c",&resp);
		}while(!resp,getchar()!='\n');

	switch(resp){
		
		case '1':
		system("clear");
		
		do{
			system("clear");
			printf("\n¿Cuantos libros desea agregar?\nPor favor ingrese cantidad: ");
			scanf("%d",&cant);
		}while(!cant,getchar()!='\n');
		
		do{
			system("clear");
			IngresoDeLibros(cant);
			do{
				printf("\nUsted ha ingresado los siguientes Libros: \n");
				for(i=0;i<cant;i++){
					ListarLibros(i);
				};
			printf("\n\nCompruebe si sus datos son correctos. \n - Presione (S) si desea guardar los datos o (N) si quiere corregir los datos antes de guardarlos\n");
			scanf("%c",&resp2);
			}while(!resp2,getchar()!='\n');
		}while(resp2!='s'&& resp2!='S');
		
		archivo=fopen("BD_Libros.txt","a+r+");
		GuardarEnBD(cant);
		fclose(archivo);
		
		
		break;
	
		case '2':
		system("clear");
						
		printf("Sus Libros cargados son los siguientes: \n");
			for(i=0;i<cant;i++){
				ListarLibros(i);
			}
  		break;

		default:break;
	}
	}while(resp!='x' && resp!='X');
	system("clear");
	printf("\n***Hasta pronto, Muchas gracias***\n");
}	


//Funciones

void IngresoDeLibros (int cant){//Para cargar libros nuevos

	printf("\nPor favor cargue sus Libros:... \n");
	
	for(i=0;i<cant;i++){
		do{
			printf("\nIngrese ID del Libro: ");
			scanf("%d",Libros[i].ID);
		}while(!(Libros[i].ID),getchar()!='\n');

		printf("\nIngrese Nombre: ");
		fgets(Libros[i].nombre, 50, stdin);
		printf("\nIngrese Autor: ");
		fgets(Libros[i].autor, 100, stdin);
		printf("\nIngrese Categoria: ");
		fgets(Libros[i].categoria, 50, stdin);
		
		system("clear");
	}
}

void ListarLibros(int i){//Para Imprimir por pantalla

	printf("****************************\n");
	printf( "ID Libro: %d", *Libros[i].ID);
	printf( "\nNombre: %s", Libros[i].nombre);
	printf( "Autor: %s", Libros[i].autor);
	printf( "Categoria: %s", Libros[i].categoria);
}

void GuardarEnBD(int cant){
	for(i=0;i<cant;i++){
		fprintf( archivo,"****************************\n");
		fprintf( archivo,"ID Libro: %d\n", *Libros[i].ID);
		fprintf( archivo,"\nNombre: %s\n", Libros[i].nombre);
		fprintf( archivo,"Autor: %s\n", Libros[i].autor);
		fprintf( archivo,"Categoria: %s\n", Libros[i].categoria);
	}
}