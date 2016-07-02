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
struct Libro Libros;

//Declaración de variables
char 	resp;


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
		printf("\n***Aquí irá el codigo para ingresar libros***\n");
		break;
	
		case '2':
		system("clear");
		printf("\n***Aquí ira el codigo para listar libros***\n");
  		break;

		default:break;
	}
	}while(resp!='x' && resp!='X');
	system("clear");
	printf("\n***Hasta pronto, Muchas gracias***\n");
}	