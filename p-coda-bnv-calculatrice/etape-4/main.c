#include <stdio.h>
#include <stdlib.h>

int fst_number;
int snd_number;
char operator;

void snd_nb_check(void) {
    while ((operator == '/' && snd_number == 0) ||
           (operator == '%' && (int)snd_number == 0)) {
        printf("Desole, une operation avec zero est impossible.\n >> Nouveau nombre: ");
        if (scanf("%d", &snd_number) != 1) {
            return;
        }
    }
}
void snd_op_check(void) {
    while (operator != 37 && operator != 42 && operator != 43 && operator != 45 && operator != 47 ) {
        printf("Desole, cette operation n'est pas reconnu.\n >> Nouveau Symbole: ");
        scanf(" %c", &operator);
    }
}

int main() {
    printf("Choisissez une operation:\n     +  -  *  /  %%\n >> Symbole: ");
    scanf("%c", &operator);
    snd_op_check();

    printf("Choisissez un premier nombre :\n >> Nombre: ");
    scanf("%d", &fst_number);
    printf("Choisissez un second nombre :\n >> Nombre: ");
    scanf("%d", &snd_number);
    snd_nb_check();

    if (operator == 43) {
        printf("addition\n");
    } else if (operator == 45) {
        printf("soustraction\n");
    } else if (operator == 42) {
        printf("multiplication\n");
    } else if (operator == 47) {
        printf("division\n");
    } else if (operator == 37) {
        printf("modulo\n");
    }

    exit(0);
}