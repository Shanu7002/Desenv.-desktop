#include <stdio.h>

int main(){
    int i, vetor[10], num;

    for(i = 0; i < 10; i++){
        if(i < 10) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
            if (vetor[i] > num) {
                num = vetor[i];
            }
        }
    }
    printf("Maior numero: %d", num);
    return 0;
}
