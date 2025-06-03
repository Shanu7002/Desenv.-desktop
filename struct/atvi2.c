#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct veiculo {
    char modelo[50];
    int ano;
    float valor;
};

int main() {
    struct veiculo carros[5];
    char ano_str[10], valor_str[20];
    int anoMinimo;

    for (int i = 0; i < 5; i++) {
        printf("Fale o nome do carro %d: ", i + 1);
        fgets(carros[i].modelo, sizeof(carros[i].modelo), stdin);
        carros[i].modelo[strcspn(carros[i].modelo, "\n")] = '\0';

        printf("Fale o ano do carro %d: ", i + 1);
        fgets(ano_str, sizeof(ano_str), stdin);
        carros[i].ano = atoi(ano_str);

        printf("Fale o valor do carro %d: ", i + 1);
        fgets(valor_str, sizeof(valor_str), stdin);
        carros[i].valor = atof(valor_str);
    }

    printf("Fale um ano minimo: ");
    scanf("%d", &anoMinimo);

    printf("\nCarros com ano maior ou igual a %d:\n", anoMinimo);
    int encontrados = 0;
    for (int i = 0; i < 5; i++) {
        if (carros[i].ano >= anoMinimo && carros[i].valor >= 30000) {
            printf("Modelo: %s, Ano: %d, Valor: R$ %.2f\n", carros[i].modelo, carros[i].ano, carros[i].valor);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum carro encontrado com ano >= %d.\n", anoMinimo);
    }

    return 0;
}