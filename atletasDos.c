#include <stdio.h>

struct atleta {
    char nombre[50];
    char pais[20];
    char deporte[20];
    float medallas;
};

int main() {
    struct atleta comp[5];
    struct atleta menos_medallas2;
    float menos_medallas = 0; 

    for (int i = 0; i < 10; ++i) {
        printf("\nATLETA %d:\n", i + 1);

        printf("Nombre: ");
        scanf("%s", comp[i].nombre);

        printf("Pais : ");
        scanf(" %s", comp[i].pais);

        printf("Deporte: ");
        scanf("%s", comp[i].deporte);

        printf("Medallas: ");
        scanf("%f", &comp[i].medallas);

        if (i == 0 || comp[i].medallas < menos_medallas) {
            menos_medallas = comp[i].medallas; 
            menos_medallas2 = comp[i];
        }
    }

    printf("\nATLETA CON MENOS MEDALLAS\n");
    printf("NOMBRE: %s\n", menos_medallas2.nombre);
    printf("MEDALLAS: %.2f\n", menos_medallas2.medallas);

    return 0;
}