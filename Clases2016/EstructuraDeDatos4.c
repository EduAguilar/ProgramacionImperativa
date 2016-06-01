#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Ejercicio de Estructuras Clase 23-05-16:
 * Cargar un conjunto de libros, cada uno con su titulo, autor, tema e identificador
 */
 
//Estructura 
struct Libros {
   char  titulo[50];//Array para guardar titulo maximo 50 caracteres
   char  autor[50]; //Array para guardar el autor maximo 50 caracteres
   char  temas[100];//Array para guardar el tema maximo 100 caracteres
   int  id_libro;   // variable para almacenar el identificador
};


int main(){
	int i;
	int cant =3;
	struct Libros Libro[cant];
	for(i=0;i<cant;i++){
		printf("Ingrese Titulo del Libro: \n");
		fgets(Libro[i].titulo, 50, stdin);// se usa para cargar string con espacios asigna nombre de la variable, longitaud  y forma de ingreso
		
		printf("Ingrese Autor del Libro: \n");
		fgets(Libro[i].autor, 50, stdin);
		
		printf("Ingrese Tema del Libro: \n");
		fgets(Libro[i].temas, 50, stdin);
		
		do{
		    do{
		        
		        printf("Ingrese ID del Libro: \n");
		        scanf ("%d",&Libro[i].id_libro);
		    }while(getchar()!='\n');
	   	}while(!(Libro[i].id_libro));
		system("clear");// limpia la pantalla para cargar el nuevo libro
	}
	
	for(i=0;i<cant;i++){
		printf( "Nombre de libro : %s", Libro[i].titulo);
   printf( "Autor : %s", Libro[i].autor);
   printf( "Tematica : %s", Libro[i].temas);
   printf( "Identificadorr : %d\n\n", Libro[i].id_libro);
	}

}