#include <stdio.h>

int main() {
    float notas[5], media, nota = 0.0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
        nota += notas[i];
    }
    media = nota / 5;
    printf("Media = %.2f\n", media);

    return 0;
}