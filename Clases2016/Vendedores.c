/********************************************************************************************************/ 
/* Crear un programa llamado vendedores que cree un array de 18 X 10 indicando,
/* que poseemos una empresa de 18 vendedores cada uno de los cuales vende 10 productos.
/*
/* El array almacena los ingresos obtenidos por cada vendedor en cada producto, 
/* de modo que un menú permite almacenar los ingresos, revisar el total de cada vendedor, 
/* y obtener los ingresos totales
/**********************************************************************************************************/

#include <stdio.h>//libreria de entrada y salida
#include <stdlib.h>//libreria para poder usar rand
#include <time.h> //libreria par usar el reloj de la maquina, me hace posible usar la funcion srand

//defino constantes
#define vend  18
#define prod  10

//declaro variables
float almacen[vend][prod];//matriz de vendedores/productos almacena el ingresos por productos
float tingvendedores[vend];//vector que almacenará los ingresos totales por cada vendedor
float tingxvend =0;//variable auxiliar para almacenar temporalmente el ingreso total de cada vendedor
float ingtotal  =0;//variable que almacenará los ingresos totales de todos los vendedores
int i,j=0;
int eleccion,eleccion2;
char resp,resp2;

void main() {
    
    srand (time(NULL));//se llama a esta funcion parq que rand(); no sevuelva siempre los mismos numeros
	//se crea una semilla para que rand haga su calculo
  
    //cargo los valores de la matriz y los vectores
    for (i=0; i<vend;i++){
        tingxvend=0;
        for (j=0;j<prod;j++){
            almacen[i][j]= rand()%20+1;
            tingxvend = tingxvend + almacen[i][j];
            
            tingvendedores[i]=tingxvend;//voy llenando el vector total ingresos vendedores
            
        }
        //printf("%.1f \t",tingvendedores[i]);//mostraria el vector donde cargue los ingresos totales por vendedor.
        ingtotal= ingtotal+tingvendedores[i];//voy acumulando todos los valores de ingreso
    }
    
    do{
        system("clear");
        printf("\t\t\t Registro de vendores y sus ventas\n");
        printf("\t\t*********************************************************\n");
        
        do{
            
            printf("\n\t\t\t ¿Que desea consultar? \n\n");
            printf("1) Ver detalles de ingresos \t 2) Ver ingresos por vendedor \t 3) Ver el total de ingresos\n");
            printf("Presione el numero correspondiente a su eleccion\n");
            scanf("%d",&eleccion);
            getchar();//para frenar un bucle
            system("clear");//limpiar pantalla
            
        }while(eleccion <1 || eleccion >3 || !eleccion);    
    
    switch(eleccion){
        case 1:
        printf("\n\t\t\t Detalle de ingresos por vendedor y producto\n");
        printf("Producto: \t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
        printf("-----------------------------------------------------------------------------------------------\n");
        printf("Vendedor: \n");
        //imprimo la matriz de vendedores y productos
        for (i=0; i<vend;i++){
            printf(" (%i) \t|\t",i+1);
            for (j=0;j<prod;j++){
                printf("%.1f\t",almacen[i][j]);
            }
            printf("\n");
        }

        break;
        
        case 2:
            do{
                do{
                system("clear");
                printf("¿De cual vendedor desea chequear los ingresos?... \n");
                printf("Usted posee %d vendedores, elija el número de vendedor \n",vend);
                scanf("%d",&eleccion2);
                getchar();
                system("clear");
                }while(eleccion2 <1 || eleccion2 >18 || !eleccion2);
            
            printf("\n El vendedor %d obtuvo un total de ingresos de: \n",eleccion2);
            printf("\t\t%.1f \n",tingvendedores[eleccion2-1]);
            
            printf("\n ¿Desea consultar por otro vendedor? \n s=SI || n=NO\n");
            scanf("%s",&resp2);
            system("clear");
            }while(resp2=='s' || resp2=='S');
        
        break;
        
        case 3:
        system("clear");
        printf("\n El ingreso total de todos los vendedores es: %.2f \n",ingtotal);
        
        break;
        
        default:
        printf("jojo\n");
        break;
    } 
    printf("\n ¿Desea realizar otra consulta?\n s=SI || n=NO\n");
    scanf("%s",&resp);
    system("clear");
    }while(resp=='s' || resp=='S');
    
}


