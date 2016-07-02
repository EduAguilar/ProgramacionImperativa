/*Examen de Programación Imperativa 1 de Julio 2016 

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

//Declaración de variables
char 	resp;
int		i,cant=0;


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
		
		IngresoDeLibros(cant);
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

	printf("Por favor cargue sus Libros:... \n");
	
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
