#include <stdio.h>
#include <string.h>

int main() {
    FILE *ativ2;
    char nome[100], nome_busca[100];
    int telefone;
    int encontrado = 0;

    ativ2 = fopen("ativ2.txt", "a"); // Abre para adicionar novos registros
    if (ativ2 == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    for (int i = 1; i <= 5; i++) {
        printf("Digite seu nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Digite seu telefone: ");
        scanf("%d", &telefone);
        getchar();

        fprintf(ativ2, "%s - %d\n", nome, telefone);
    }

    fclose(ativ2);
    printf("Nomes e telefones registrados com sucesso!\n");
    ativ2 = fopen("ativ2.txt", "r");
    if (ativ2 == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("Digite o nome que deseja buscar: ");
    fgets(nome_busca, sizeof(nome_busca), stdin);
    nome_busca[strcspn(nome_busca, "\n")] = '\0';

    while (fscanf(ativ2, "%[^\n] - %d\n", nome, &telefone) != EOF) {
        nome[strcspn(nome, "\n")] = '\0';
        if (strcmp(nome, nome_busca) == 0) {
            printf("Nome: %s - Telefone: %d\n", nome, telefone);
            encontrado = 1;
            break;
        }
    }

    fclose(ativ2);

    if (!encontrado) {
        printf("Nome não encontrado.\n");
    }

    return 0;
}
