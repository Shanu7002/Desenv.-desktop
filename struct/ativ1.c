#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct funcionarios {
    char nome[50];
    int idade;
}funcionarios;
int main() {
    char idade_str[10];
    int media = 0;

    printf("Digite o nome do primeiro funcionario: ");
    fgets(funcionarios.nome, sizeof(funcionarios.nome), stdin);

    printf("Digite a idade do primeiro funcionario: ");
    fgets(idade_str, sizeof(idade_str), stdin);
    funcionarios.idade = atoi(idade_str);
    if (funcionarios.idade >= 18) {
        printf("Pode trabalhar.\n");
    } else {
        printf("Nao pode trabalhar.\n");
    }
    media += funcionarios.idade;
    printf("Digite o nome do segundo funcionario: ");
    fgets(funcionarios.nome, sizeof(funcionarios.nome), stdin);

    printf("Digite a idade do segundo funcionario: ");
    fgets(idade_str, sizeof(idade_str), stdin);
    funcionarios.idade = atoi(idade_str);
    if (funcionarios.idade >= 18) {
        printf("Pode trabalhar.\n");
    } else {
        printf("Nao pode trabalhar.\n");
    }
    media += funcionarios.idade;
    printf("Digite o nome do terceiro funcionario: ");
    fgets(funcionarios.nome, sizeof(funcionarios.nome), stdin);

    printf("Digite a idade do terceiro funcionario: ");
    fgets(idade_str, sizeof(idade_str), stdin);
    funcionarios.idade = atoi(idade_str);
    if (funcionarios.idade >= 18) {
        printf("Pode trabalhar.\n");
    } else {
        printf("Nao pode trabalhar.\n");
    }
    media += funcionarios.idade;
    printf("Digite o nome do quarto funcionario: ");
    fgets(funcionarios.nome, sizeof(funcionarios.nome), stdin);

    printf("Digite a idade do quarto funcionario: ");
    fgets(idade_str, sizeof(idade_str), stdin);
    funcionarios.idade = atoi(idade_str);
    if (funcionarios.idade >= 18) {
        printf("Pode trabalhar.\n");
    } else {
        printf("Nao pode trabalhar.\n");
    }
    media += funcionarios.idade;
    media = media / 4;
    printf("A media e: %d", media);
return 0;


}