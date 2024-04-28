#include <stdio.h>

struct empleado{
    char nombre[100];
    char sexo[20];
    int sueldo;
};

int main (){
    struct empleado e1;
    puts("Ingrese su nombre");
    scanf("%s", e1.nombre);
    puts("Ingrese su genero");
    scanf("%s", e1.sexo);
    puts("Ingrese su sueldo");
    scanf("%d", &e1.sueldo);

    printf("\n");

    printf("Nombre: %s\n", e1.nombre);
    printf("Genero: %s\n", e1.sexo);
    printf("Sueldo: %d\n", e1.sueldo);

    return 0;
}