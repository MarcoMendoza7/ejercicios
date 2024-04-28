#include <stdio.h>

struct empleado{
    char nombre[100];
    char sexo[20];
    int sueldo;
};

int main (){
    struct empleado e1;
    struct empleado e2;
    struct empleado e3;
    struct empleado e4;
    struct empleado e5;

    puts("PRIMER EMPLEADO");
    puts("Ingrese su nombre");
    scanf("%s", e1.nombre);
    puts("Ingrese su genero");
    scanf("%s", e1.sexo);
    puts("Ingrese su sueldo");
    scanf("%d", &e1.sueldo);

    printf("\n");

    puts("SEGUNDO EMPLEADO");
    puts("Ingrese su nombre");
    scanf("%s", e2.nombre);
    puts("Ingrese su genero");
    scanf("%s", e2.sexo);
    puts("Ingrese su sueldo");
    scanf("%d", &e2.sueldo);

    printf("\n");

    puts("TERCER EMPLEADO");
    puts("Ingrese su nombre");
    scanf("%s", e3.nombre);
    puts("Ingrese su genero");
    scanf("%s", e3.sexo);
    puts("Ingrese su sueldo");
    scanf("%d", &e3.sueldo);

    printf("\n");

    puts("CUARTO EMPLEADO");
    puts("Ingrese su nombre");
    scanf("%s", e4.nombre);
    puts("Ingrese su genero");
    scanf("%s", e4.sexo);
    puts("Ingrese su sueldo");
    scanf("%d", &e4.sueldo);

    printf("\n");

    puts("QUINTO EMPLEADO");
    puts("Ingrese su nombre");
    scanf("%s", e5.nombre);
    puts("Ingrese su genero");
    scanf("%s", e5.sexo);
    puts("Ingrese su sueldo");
    scanf("%d", &e5.sueldo);

    printf("\n");

    printf("Nombre: %s\n", e1.nombre);
    printf("Genero: %s\n", e1.sexo);
    printf("Sueldo: %d\n", e1.sueldo);
    printf("\n");

    printf("Nombre: %s\n", e2.nombre);
    printf("Genero: %s\n", e2.sexo);
    printf("Sueldo: %d\n", e2.sueldo);
    printf("\n");

    printf("Nombre: %s\n", e3.nombre);
    printf("Genero: %s\n", e3.sexo);
    printf("Sueldo: %d\n", e3.sueldo);
    printf("\n");

    printf("Nombre: %s\n", e4.nombre);
    printf("Genero: %s\n", e4.sexo);
    printf("Sueldo: %d\n", e4.sueldo);
    printf("\n");

    printf("Nombre: %s\n", e5.nombre);
    printf("Genero: %s\n", e5.sexo);
    printf("Sueldo: %d\n", e5.sueldo);
    printf("\n");

    struct empleado empleado_con_sueldo_minimo;

    if (e1.sueldo <= e2.sueldo && e1.sueldo <= e3.sueldo && e1.sueldo <= e4.sueldo && e1.sueldo <= e5.sueldo) {
        empleado_con_sueldo_minimo = e1;
    } else if (e2.sueldo <= e1.sueldo && e2.sueldo <= e3.sueldo && e2.sueldo <= e4.sueldo && e2.sueldo <= e5.sueldo) {
        empleado_con_sueldo_minimo = e2;
    } else if (e3.sueldo <= e1.sueldo && e3.sueldo <= e2.sueldo && e3.sueldo <= e4.sueldo && e3.sueldo <= e5.sueldo) {
        empleado_con_sueldo_minimo = e3;
    } else if (e4.sueldo <= e1.sueldo && e4.sueldo <= e2.sueldo && e4.sueldo <= e3.sueldo && e4.sueldo <= e5.sueldo) {
        empleado_con_sueldo_minimo = e4;
    } else {
        empleado_con_sueldo_minimo = e5;
    }

    printf("EMPLEADO CON SUELDO MINIMO\n");
    printf("Nombre: %s\n", empleado_con_sueldo_minimo.nombre);
    printf("Genero: %s\n", empleado_con_sueldo_minimo.sexo);
    printf("Sueldo: %d\n", empleado_con_sueldo_minimo.sueldo);

    return 0;
}