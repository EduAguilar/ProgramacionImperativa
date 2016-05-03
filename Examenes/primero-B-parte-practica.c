/*
***********************************************************************************************************
Primer Examen Programación Imperativa, Parte Práctica.
Alumno: Aguilar Eduardo ALfredo.  Profesor: Lucas Passalacqua.
Fecha: 02-05-16
************************************************************************************************************
Ejercicio:
4) Escriba su cuenta de github, y el repositorio donde va a subir sus ejercicios para poder ser evaluados.

    a) Muestre un menú con las opciones sumar, restar, multiplicar y dividir, 
    el programa solicitará una opción, luego el ingreso de dos números, y realizará la tarea elegida.
    Se debe usar una función para mostrar el menú, pedir los datos en el main.
    También usar funciones para realizar los cálculos. 
    
    b) Que pida 10 números por teclado, los almacene en un array y muestre la suma.
************************************************************************************************************
*/
//Ejercicio b)

#include <stdio.h>
#include <stdlib.h>
#define LONG 10 //Defino una Constante

float suma[LONG];

void main (){
    int i;
    float acumulador = 0;
    system("clear");//limpiar pantalla
	//imprimo en pantalla, info inicial del programa
	printf("\t\t\t\t   Sumar array \t\n");
	printf("\t\t Ejercicio de examen, Programación Imperativa\n");
	printf("\t\t\t Alumno: Aguilar Eduardo Alfredo\n");
	printf("\t\t\t Profesor: Lucas Passalacqua\n");
	printf("\t\t\t\t Fecha: 02-05-16 \n\n");

    
    printf("Por favor ingrese %d numeros de a uno a la vez\n",LONG);
    for(i=0;i<LONG;i++){
        do{
            do{
            printf("ingrese numero:");
            scanf("%f",&suma[i]);
            acumulador = acumulador + suma[i];
            system("clear");
            }while(getchar()!= '\n');
        }while(!suma[i]);
    }
    printf("Su array de numeros es: \n");
    for(i=0;i<LONG;i++){
        printf("%.2f\t",suma[i]);
    }
    printf("\n la suma de los valores de su array es: %.2f", acumulador);

}