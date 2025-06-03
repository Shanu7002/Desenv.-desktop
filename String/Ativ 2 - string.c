#include <stdio.h>
#include <string.h>

int main() {
    char name1[50];
    char name2[50];
    char name1p2[50];
    char name2p2[50];


    printf("Write your first name: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';
    printf("Write your last name: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0';

    int tamanho1 = strlen(name1);
    int tamanho2 = strlen(name2);

    if (tamanho1 > tamanho2) {
        printf("Your first name have more letters than last name.\n");
    } else if (tamanho1 < tamanho2) {
        printf("Your last name have more letters than first name.\n");
    } else {
        printf("Your first name have the same amount of letters as your last name.\n");
    }

    if (strcmp (name1, name2) == 0) {
        printf("The names are the same.\n");
    } else {
        printf("The names are not the same.\n");
    }

    strcpy (name1p2, name1);
    strcat (name1p2, " ");
    strcat (name1p2, name2);
    printf("Entire name: %s\n", name1p2);


    return 0;

}
