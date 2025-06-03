#include <stdio.h>

float media(float n1, float n2, float n3) {
    float media = (n1 + n2 + n3) / 3;
    return media;
}

void resultado(float media) {
    if (media >= 7.00) {
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }
}

int main() {
    float n1, n2, n3;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    resultado(media(n1, n2, n3));
    return 0;
}