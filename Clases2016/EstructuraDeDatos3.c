/*
En este ejercicio utilizamos estructuras de datos, 
pero el ingreso es por teclado, se le solicita al usario que ingrese los datos,
para el libro 1 y para el libro 2 el ingreso esta predefinido.
La impresion en pantalla es mediante funciones.
*/

#include <stdio.h>
#include <string.h>
#include <stdio.h>

//Defino la estructura a utilizar 
struct Books {
   char  titulo[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

//Declaro la función a utilizar
void printBook( struct Books book );

int main( ) {

   struct Books Book1;        /* Declaro Book1 como tipo Book(Estructura) */
   struct Books Book2;        /* Declaro Book2 como tipo Book(Estructura) */
   
   
   printf("Ingrese el Titulo de su libro: ");
   fgets(Book1.titulo,50,stdin);
   printf("Ingrese Autor: ");
   fgets(Book1.author,50,stdin);
   printf("Ingrese asunto: ");
   fgets(Book1.subject,50,stdin);
   printf("Ingrese ID del libro: ");
   scanf("%d",&Book1.book_id);
   
  
   /*Valores predefinidos para el libro 2 */
   strcpy( Book2.titulo, "Programacion Imperativa");
   strcpy( Book2.author, "Lucas Passalacqua");
   strcpy( Book2.subject, "Ejemplo de Estructuras en C");
   Book2.book_id = 002;
 
 
   //LLamo a la funcion y le paso los parametros Book1, y Book2.
   printf("\nLibro 1\n***************\n");
   printBook( Book1 );
   printf("\nLibro 2\n***************\n");
   printBook( Book2 );

   return 0;
}


//Funcion para imprimir por pantalla los datos de los libros.
void printBook( struct Books book ) {

   printf( "Titulo del Libro: %s\n", book.titulo);
   printf( "Autor del Libro : %s\n", book.author);
   printf( "Asunto del Libro: %s\n", book.subject);
   printf( "ID del libro: %d\n", book.book_id);
}