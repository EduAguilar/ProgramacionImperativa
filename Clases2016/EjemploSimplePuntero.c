#include <stdio.h>

void *SumarConPunteros(int *a);//declaro funcion como puntero


int main(){
    int a =1;
    int b =0;
    int *p, *x;
    p=&a;
    printf("Muestro p=&a : %d\n",*p);
    
    b=*p+10;
    printf("Muestro b=*p+10 : %d\n", b);
    
    *p=*p+1;
    printf("Muestro *p=*p+1: %d\n",*p);
    
    a=SumarConPunteros(p);
    printf("Muestro *p despues de la funcion: %i",a);
    
}

void *SumarConPunteros(int *a){
    a++;
    return a;
}