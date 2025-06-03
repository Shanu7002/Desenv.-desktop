#include <stdio.h>

float media(int a, int b, int c) {
    float mediaFinal = (a + b + c) / 3.0;
    return mediaFinal;
}

int main() {
    int a, b, c;
    float mediaFinal;
    printf("Digite a primeira nota: ");
    scanf("%d", &a);
    printf("Digite a segunda nota: ");
    scanf("%d", &b);
    printf("Digite a terceira nota: ");
    scanf("%d", &c);
    mediaFinal = media(a, b, c);
    printf("A sua media final e %.2f\n", mediaFinal);
    return 0;
}