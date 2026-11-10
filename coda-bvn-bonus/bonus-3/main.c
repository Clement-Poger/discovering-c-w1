#include <stdio.h>

int main() {
    char nom[20];
    char prenom[20];
    fprintf(stderr, "Nom: ");
    scanf("%19s", nom);
    fprintf(stderr, "Prenom: ");
    scanf("%19s", prenom);
    printf("Nom: %s \nPrenom: %s", nom, prenom);
    return 0;
}