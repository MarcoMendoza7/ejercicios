#include <stdio.h>

struct CD{
    char titulo[100];
    char artisata[50];
    int canciones;
    int anio;
    float precio;
};

int main (void){
    struct CD cd1;
    puts("Ingrese el titulo");
    scanf("%s", cd1.titulo);
    puts("Ingrese el nombre");
    scanf("%s", cd1.artisata);
    puts("Ingrese el numero de canciones");
    scanf("%d", &cd1.canciones);
    puts("Ingrese el año");
    scanf("%d", &cd1.anio);
    puts("Ingrese el precio");
    scanf("%f", &cd1.precio);

    printf("\n");

    printf("Titulo: %s\n", cd1.titulo);
    printf("Nombre: %s\n", cd1.artisata);
    printf("Numero de canciones: %d\n", cd1.canciones);
    printf("Año: %d\n", cd1.anio);
    printf("Precio: %f\n", cd1.precio);
    return 0;
}