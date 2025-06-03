#include <stdio.h>
#include <string.h>


int main() {
    char companies[5][20];
    int i;

    for (i = 0;i < 5;i++) {
        printf("Write the companie name: ");
        fgets(companies[i],sizeof(companies[i]), stdin);
        companies[i][strcspn(companies[i], "\n")] = '\0';
    }
    for (i = 0;i < 5;i++) {
        printf("company %d: %s\n", i + 1, companies[i]);
    }
if (companies[i], "google") {
        printf("Google foi encontrada");
    }

    return 0;
}
