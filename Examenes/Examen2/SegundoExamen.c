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

3)Agregar las opciones

	3-Editar Registros(Libro)
	4-Eliminar Registros
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Defino una estructura tipo Libro con sus determinados campos de variables
struct Libro {
   char    ID[50];
   char    nombre[50]; 
   char    autor[100];
   char    categoria[50];
};

//Declaro la estructura que voy a utilizar Libros de tipo Libro
struct Libro Libros;

//Declaracion de Funciones
void IngresoDeLibros();
void PrintLibros();
void ListarLibros();
void GuardarEnBD();
void EditarRegistro();

//Declaración de variables
char 	resp,resp2;
int		i,cant=0;

FILE *archivo;

int main(){

	do{
		do{
			system("clear");
			printf("\n\t\tMenú - Sistema de Libros\n");
			printf("\t*****************************************\n");
			printf("\nElija entre las siguientes opciones\n\n1)- Ingresar Nuevo Libro (1). \n2)- Listar Libro (2).\n3)- Editar registros (3). \n4)- Eliminar registros (4). \nX)- Salir (X).\n");
			scanf("%c",&resp);
		}while(!resp,getchar()!='\n');

	switch(resp){
		
		case '1':
		system("clear");
		do{
			IngresoDeLibros();
			printf("\nUsted ha ingresado el siguiente Libro: \n");
			PrintLibros();

			do{	
				printf("\n\nCompruebe si sus datos son correctos. \n - Presione (S) si desea guardar los datos o (N) si quiere corregir los datos antes de guardarlos\n");
				scanf("%c",&resp2);
			}while(!resp2,getchar()!='\n');
		}while(resp2!='s'&& resp2!='S');
		GuardarEnBD();
		break;
	
		case '2':
		system("clear");
		printf("Sus Libros cargados son los siguientes: \n");
		ListarLibros();
		break;
  		
  		case '3':
  		system("clear");
  		EditarRegistro();
  		
  		break;
  		
  		case '4':
  		system("clear");
  		
  		break;

		default:break;
	}
	}while(resp!='x' && resp!='X');
	system("clear");
	printf("\n***Hasta pronto, Muchas gracias***\n");
}	


//Funciones

void IngresoDeLibros (){//Para cargar libros nuevos

	printf("\nPor favor cargue los datos de su Libro:... \n");

	printf("\nIngrese ID del Libro: ");
	fgets(Libros.ID, 50, stdin);
	printf("\nIngrese Nombre: ");
	fgets(Libros.nombre, 50, stdin);
	printf("\nIngrese Autor: ");
	fgets(Libros.autor, 50, stdin);
	printf("\nIngrese Categoria: ");
	fgets(Libros.categoria, 50, stdin);
}

void PrintLibros(){//Para Imprimir libros por pantalla
	printf("****************************\n");
	printf( "ID Libro: %s", Libros.ID);
	printf( "Nombre: %s", Libros.nombre);
	printf( "Autor: %s", Libros.autor);
	printf( "Categoria: %s", Libros.categoria);
}

void ListarLibros(){//Para Listar libros desde la Base de Datos
	archivo=fopen("BD_Libros.txt","r+b");
	
	while(!feof (archivo)){
		
		fread(&Libros,sizeof(Libros),1,archivo);//Para leer la estructura desde la base de datos
		
		if(!feof(archivo)){
		printf("****************************\n");
		printf( "ID Libro: %s", Libros.ID);
		printf( "Nombre: %s", Libros.nombre);
		printf( "Autor: %s", Libros.autor);
		printf( "Categoria: %s", Libros.categoria);
		};
	};
	getchar();
	fclose(archivo);
}

void GuardarEnBD(){//Para guardar en la Base de datos
	archivo=fopen("BD_Libros.txt","a+r+");
	fwrite(&Libros,sizeof(Libros),1,archivo);
	fclose(archivo);
}

void EditarRegistro(){
	char id[10];
	char resp3;
	int tama;
	system("clear");
	tama=sizeof(Libros);//verifica el tamaño de la estructura y se la asigna a la variable
	archivo = fopen("BD_Libros.txt", "rb+");
		printf("Ingrese el id del libro a editar: ");
		fgets(id,10,stdin);// se carga el conjunto de datos a buscar en la estructura, pueden ser varios 
		//getchar();
		system("clear");
	
		while(!feof(archivo)){
			fread(&Libros,sizeof(Libros),1,archivo);// lee la estructura del archivo 
			 if (strcmp(id,Libros.ID)==0){
			
			printf("\nEl registro que usted desea modificar es el siguiente:\n");
			printf("\n*******************************\n");
			printf("1)- ID: %s",Libros.ID);
			printf("2)- NOMBRE: %s",Libros.nombre);
			printf("3)- AUTOR: %s",Libros.autor);
			printf("4)- CATEGORIA: %s",Libros.categoria);
			printf("S)- S (MINUSCULA) Para salir de la edición \n");
			printf("*******************************\n");
		
			
				while(resp3!='s'){
					printf("Por favor seleccione la opcion de la cual desea modificar su valor:");
					resp3=getchar();
					//getchar();
					//resp3=toupper(getchar());
					getchar();
					
					
					switch (resp3){
						case '1':
						printf("Ingrese el nuevo ID: ");
						fgets(Libros.ID,10,stdin);
						break;
						case '2':
						printf("Ingrese el nuevo NOMBRE: ");
						fgets(Libros.nombre,50,stdin);
						break;
						case '3':
						printf("Ingrese el nuevo AUTOR: ");
						fgets(Libros.autor,50,stdin);
						break;
						
						case '4':
						printf("Ingrese la nueva CATEGORIA: ");
						fgets(Libros.categoria,50,stdin);
						break;
						
						case 's':
						fseek(archivo,-tama, SEEK_CUR);
						fwrite(&Libros,sizeof(Libros),1,archivo);
						system("clear");
						break;
						
						default:
						break;
					}
					
				}
				
			}
			
		}
		
		fclose(archivo);
	}

/*
void EditarRegistro(){
	
	char ValorBuscado[50];//Variable donde se almacenara temporalmente el valor buscado a editar
	char resp3;
	int tam;//Variable que se utilizará para guardar el tamaño de la estructura
	
	tam=sizeof(Libros);//Se asigna el tamaño de la estructura a la variable
	
	archivo = fopen("BD_Libros.txt","a+rb+");
	printf("Usted procederá a modificar el registro de un libro...\n");
	printf("\nPor favor ingrese el ID del libro a editar: ");
	fgets(ValorBuscado,50,stdin);
	
	system("clear");
	
	while(!feof(archivo)){
		fread(&Libros,sizeof(Libros),1,archivo);// lee la estructura del archivo
		
		if (strcmp(ValorBuscado,Libros.ID)==0){//Se compara la Variable a buscar con los nombres de los libros 
											   //almacenados en la Base de Datos, si este coincide entonces procede y muestra un menú
			printf("\nEl registro que usted desea modificar es el siguiente:\n");
			printf("\n*******************************\n");
			printf("1)- ID: %s",Libros.ID);
			printf("2)- NOMBRE: %s",Libros.nombre);
			printf("3)- AUTOR: %s",Libros.autor);
			printf("4)- CATEGORIA: %s",Libros.categoria);
			printf("X)- X Para salir de la edición \n");
			printf("*******************************\n");
		
			while(resp3!='X'&&resp3!='x'){
			printf("\nPor favor seleccione la opcion de la cual desea modificar su valor:");
			scanf("%s",&resp3);
			getchar();
			
			switch (resp3){
				case '1':
				printf("\nIngrese el nuevo ID: ");
				fgets(Libros.ID,50, stdin);
				break;
				
				case '2':
				printf("Ingrese el nuevo NOMBRE: ");
				fgets(Libros.nombre,50,stdin);
				break;
				
				case '3':
				printf("Ingrese el nuevo AUTOR: ");
				fgets(Libros.autor,50,stdin);
				break;
				
				case '4':
				printf("Ingrese la nueva CATEGORIA: ");
				fgets(Libros.categoria,50,stdin);
				break;
				
				case 'X':
				fseek(archivo,-tam, SEEK_CUR);
				fwrite(&Libros,sizeof(Libros),1,archivo);
				system("clear");
				break;
				default:
				break;
				}
			}
	
		}
		
		//if (strcmp(ValorBuscado,Libros.nombre)==1){
		//	printf("\nEl libro que usted busca editar no se encuentra registrado en la base de datos, o ha ingresado un nombre incorrecto\n");
		//}
	}
	fclose(archivo);
}*/