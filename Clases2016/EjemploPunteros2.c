#include <stdio.h> 
#include <stdlib.h>

int main(){
    
    //Definamos estas variables:
    int x[100],b,*pa,*pb;
    //...
    x[50]=10; //Le asignamos el valor de 10, al array #50
    printf("Le asignamos el valor de 10, al array #50");
    printf("x[50]=10; -->\t %d\n",x[50]);
    printf("valor de memoria del puntero pa %p\n",pa);
    pa=&x[50]; //Le asignamos al puntero pa, la direccion de memoria que tiene x[50]
    printf("pa=&x[50] -->\t %p\n",pa);
    printf("pa=&x[50] -->\t %d\n",*pa);
    printf("valor de memoria del puntero pa, luego de asignarle la direccino de x[50] %p\n",pa);
    
    //Ahora mostramos algunas posibles operaciones:

    b = *pa+1; //Esto es como decir el valor que tiene el array de x[50] sumarle 1.
           //Esto es igual a: b=x[50]+1; => Su valor seria igual a 11.
    printf("b = *pa+1 -->\t %d\n",b);       

    b = *(pa+1); //Esto primero pasa a la siguiente direccion de memoria y luego lo referencia
             //El resultado es: b = x[51];
    printf("b = *(pa+1) --> %d\n",b);      
    pb = &x[10]; //al puntero pb se le asigna la direccion de x[10]
    printf("pb = &x[10] --> %d\n",pb); 
    
    *pb = 0; //Al valor que tiene el puntero se le asigna 0
             //Esto es igual que decir: x[10] = 0
    printf("*pb = 0 -->\t %d\n",*pb); 
    *pb += 2; //El valor del puntero se incrementa en dos unidades, es decir x[10] = 2
    printf("*pb += 2 --> %d\n",*pb); 
    (*pb)--; //El valor del puntero se decrementa en una unidad.
    printf("(*pb)-- --> %d\n",*pb); 
    x[0] = *pb--; //A x[0] se le pasa el valor de x[10] y el puntero pb, pasa a apuntar a x[9]
              //recuerda, que -- es post-incremento, primero asignara y luego restara.
    printf("x[0] = *pb-- --> %d\n",*pb);
  
}