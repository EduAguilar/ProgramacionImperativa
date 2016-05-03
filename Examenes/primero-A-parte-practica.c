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
//Ejercicio a)

#include <stdio.h> //llamo libreria de entrada y salida
#include <stdlib.h>//llamo libreria que me permitirá usar system("clear");
#define CANTNUM 10
//declaro funciones que voy a utilizar en el main;
float suma (float a, float b);
float resta (float a, float b);
float multiplicacion (float a, float b);
float dividir (float a, float b);
float ingresodedatos(float a);


//declaro variables a utilizar;
float a,valor1,valor2;
int resp;
char resp2;

//comienzo con el main
float main (){

	do{
	system("clear");//limpiar pantalla
	//imprimo en pantalla, info inicial del programa
	printf("\t\t\t\t   Cálculos \t\n");
	printf("\t\t Ejercicio de examen, Programación Imperativa\n");
	printf("\t\t\t Alumno: Aguilar Eduardo Alfredo\n");
	printf("\t\t\t Profesor: Lucas Passalacqua\n");
	printf("\t\t\t\t Fecha: 02-05-16 \n\n");

	//muestro el menú de opciones disponibles en la pantalla;
		do{
			do{
				printf("¿Qué operación desea realizar? \n 1) Sumar \t 2) Restar \n 3) Dividir \t 4) Multiplicar \n ");
				printf("Elija una opción por favor.\n");
				scanf("%i", &resp);
				system("clear");
			}while(getchar()!= '\n');//Utilizo este getchar que espera un caracter distinto a enter(salto de linea)
									//para frenar el frenar el bucle que le sigue.
		}while (resp!=1 && resp!=2 && resp!=3 && resp!=4 );//verifica que la opción elegida este entre las
														  // las opciones disponibles.
	
		//llamo a las funciones de ingreso de datos;
		valor1= ingresodedatos(a);
		valor2= ingresodedatos(a);
		
		//utilizo un switch para comparar la posibles opciones del valor obtenido y guardado en la variable resp.
		switch(resp){
		case 1://el caso uno es la opción sumar.
		//muestra en pantalla el resultado de llamar a la funcion suma.
		printf("\nEl resultado la suma es: %.2f \n",suma(valor1,valor2));
		break;
		case 2://el caso dos es la opción restar.
		//muestra en pantalla el resultado de llamar a la funcion resta.
		printf("\nEl resultado de la resta es: %.2f \n",resta(valor1,valor2));
		break;
		case 3://el caso tres es la opción dividir.
		
		if (valor2 != 0){//verifica la condicion que el valor2 sea distindo de 0 para poder hacer la división.
				//muestra en pantalla el resultado de llamar a la funcion dividir.
				printf("\nEl resultado de su división es: %.2f \n",dividir(valor1,valor2));	
		}else{//en caso que el valor sea 0, entonces imprime en pantalla el error.
			printf("\nERROR NO PUEDE DIVIDIR POR CERO\n");
		}	
		break;
		case 4://el caso cuatro es la opción de multiplicar.
		//muestra en pantalla el resultado de llamar a la funcion multiplicacion.
		printf("\nEl resultado de su multiplicación es: %.2f \n",multiplicacion(valor1,valor2));
		break;
		default:
		printf("\nEl valor ingresado no es correcta, por favor vuelva a intentarlo");
		}
		//consulta si desea seguir realizando operaciones y en caso afirmativo vuelve a comenzar el bucle.
		printf("¿Desea realizar otra operación?");
		printf("Presione s o n segun corresponda. s = si  || n = no \n");
		
		scanf("%s",&resp2);
		
	system("clear");//limpia pantalla.	
	}while(resp2=='s' || resp2=='S');//valida que la variable resp2 sea igual a s minuscula o a S mayuscula.
}


//funciones de las operaciones

//funcion que corresponde al ingreso de datos.
float ingresodedatos(float a){
    
    do{
    	do{
    	printf("Ingrese número: ");
		scanf("%f",&a);
    	}while(getchar()!= '\n');
	}while(!a && a!=0 );
    return (a);
}

//función que corresponde a la operación Suma.
float suma (float a, float b){
    return a+b;
}
//función que corresponde a la operación Resta.
float resta (float a, float b){
	return a-b;
}
//función que corresponde a la operación Multiplicación.
float multiplicacion (float a, float b){
	return a*b;
}
//función que corresponde a la operación dividir.
float dividir (float a, float b){
	return a/b;
}
