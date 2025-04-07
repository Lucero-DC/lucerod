 #include<stdlib.h>
#include<stdio.h>

int main(){
    int n;
    int factorial = 1;
    
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);
    
    if(n<0){
            printf("El factorial de un numero negativo no existe. \n");
    } else{
          for(int i = 1; i <= n; i++) {
                   factorial *=i; 
           }
           printf("El factorial de %d es %llu\n", n, factorial);
    }       
    getch();
    return 0;
}
