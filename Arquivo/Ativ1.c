#include <stdio.h>

int main() {
    FILE *ativ1;
    char nome[100];

    ativ1 = fopen("ativ1.txt", "a");
    if (ativ1 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 1; i <= 3; i++) {
        printf("Digite o nome %d: ", i);
        fgets(nome, sizeof(nome), stdin);
        fprintf(ativ1, "%s", nome);
    }

    fclose(ativ1);
    printf("Nomes gravados com sucesso!\n");

    return 0;
}
