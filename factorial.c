#include <stdio.h>

int numero (int num);
int factorial (int num);

int main (void){
    int n, fac, num;
    n = numero(num);
    fac = factorial(n);
    printf("El factorial de %d es : %d", n, fac);
    printf("\n");
    return 0;
}

int factorial (int num){
    if (num == 1){
        return 1;
    }else{
        return num * factorial (num - 1);
    }
}

int numero (int num){
    puts("Ingrese un numero ...");
    scanf("%d", &num);
    return num;
}