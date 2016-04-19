/*Primer ejercicio clase Programación Imperativa 2016
 *1)Crear un programa en C, que ingrese cantidades y precios, y luego indique el valor de la factura.
 *2)Modificar el programa anterior, para que ingreses cantidad, descripción y precios. Luego muestre por pantalla el listado de lo 
 *cargado y muestre el total.
 *Autor: Aguilar Eduardo Alfredo
 *Temas tratados: 
                Main()
                printf()
                scanf()
                tipos de datos
                while
                switch
                funciones de retorno
 */

#include <stdio.h>
#include <stdlib.h>


float main(){
    
    //declaracion de variables    
    int     producto = 0;
    float   precio, total =0;
    float   cantidad =0;
    char    resp = 's';
    
   
    do{
    //listo productos disponibles a cargar
    printf("Usted tiene su siguientes productos de verduleria para cargar: \n");
    printf("1) Manzanas: $15 \t 2) Peras: $20 \t\t 3) Naranjas: $18 \n");
    printf("4) Papas: $7 \t\t 5) Cebollas: $27 \t 6) Zanahorias: $25 \n");
    
    do{
        do{
            printf("Cargue producto por favor...\n");
            scanf("%d",&producto);  
            //system("clear");//limpio pantalla
        } while(getchar() != '\n');//marco una pausa esperando que el usuario ingrese dato distinto a un salto
   
    }while(!(producto) || producto > 6 || producto < 1);
    //Condicion mientras no se cumple que la variable producto sea flotante o  producto mayor que 6 
    //o menor que 1 entonces se repite el bucle y pide que se ingrese nuevo producto.
    
    
    
    do{
        do{
            printf("¿Qué cantidad desea? \n");
            scanf("%f",&cantidad);
            system("clear");
            
        }while(getchar() != '\n');//marco una pausa esperando que el usuario ingrese dato distinto a un salto
    }while(!(cantidad)); //Condicion mientras no se cumple que la variable cantidad sea flotante entonces repite 
                        //el bucle y pide nuevamente cantidad
    system("clear");
    
    switch(producto){ //compara la variable producto y segun el caso utiliza la variable cantidad para multiplcar el valor
        case 1:
        precio= precio + 15*cantidad;
        break;
        case 2:
        precio= precio + 20*cantidad;
        break;
        case 3:
        precio= precio + 18*cantidad;
        break;
        case 4:
        precio= precio + 7*cantidad;
        break;
        case 5:
        precio= precio + 27*cantidad;
        break;
        case 6:
        precio= precio + 25*cantidad;
        break;
        default:
        printf("el valor ingresado no es correcto \n");
        break;
    }

    printf("Desea cargar otro producto (si=s || no=n)? \n");
    scanf("%s",&resp);
    system("clear");
    
    }while(resp=='s' || resp=='S');//Condición mientras resp sea igual a s o S el bucle se repite.
    
    
    return printf("el valor de su factura es: %.2f \n", precio);

    
}
