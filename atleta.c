#include <stdio.h>

struct atleta{
    char deporte[30];
    char nombre[30];
    char pais[30];
    int medallas;
};

int main (){
    struct atleta a1;
    puts("Ingrese su deporte");
    scanf("%s", a1.deporte);
    puts("Ingrese su nombre");
    scanf("%s", a1.nombre);
    puts("Ingrese su pais");
    scanf("%s", a1.pais);
    puts("Ingrese su numero de medallas");
    scanf("%d", &a1.medallas);

    printf("\n");

    printf("Deporte: %s\n", a1.deporte);
    printf("Nombre: %s\n", a1.nombre);
    printf("Pais: %s\n", a1.pais);
    printf("Numero de medallas: %d\n", a1.medallas);

    return 0;
}