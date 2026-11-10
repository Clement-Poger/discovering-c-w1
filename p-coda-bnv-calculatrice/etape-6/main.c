#include <stdio.h>
#include <stdlib.h>

int fst_number;
int snd_number;
double result;
char operator;

int colors() {
    // Table de couleur provenant de https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
    #define GRN "\033[0;32m"
    #define RED "\033[0;31m"
    #define BLU "\033[0;34m"
    #define CYN "\033[0;36m"
    #define WHT "\033[0;37m"

    #define BGRN "\033[1;32m"
    #define BBLU "\033[1;34m"
    #define BCYN "\033[1;36m"
    #define BWHT "\033[1;37m"

    #define CRESET "\033[0m"
}
void snd_nb_check(void) {
    while ((operator == '/' && snd_number == 0) ||
           (operator == '%' && (int)snd_number == 0)) {
        printf(RED"Desole, une operation avec zero est impossible.\n"CYN" >> Nouveau nombre: "BCYN);
        if (scanf("%d", &snd_number) != 1) {
            return;
        }
    }
}
void snd_op_check(void) {
    while (operator != 37 && operator != 42 && operator != 43 && operator != 45 && operator != 47 ) {
        printf(RED"Desole, cette operation n'est pas reconnu.\n"CYN" >> Nouveau Symbole: "BCYN);
        scanf(" %c", &operator);
    }
}

int main() {
    colors();
    printf(BBLU"Bonjour!\nChoisissez une operation:\n     +  -  *  /  %%\n"CYN" >> Symbole: "BCYN);
    scanf("%c", &operator);
    snd_op_check();

    printf(BBLU"Choisissez un premier nombre :\n"CYN" >> Nombre: "BCYN"");
    scanf("%d", &fst_number);
    printf(BBLU"Choisissez un second nombre :\n"CYN" >> Nombre: "BCYN"");
    scanf("%d", &snd_number);
    snd_nb_check();

    if (operator == 43) {
        result = fst_number+snd_number;
    } else if (operator == 45) {
        result = fst_number-snd_number;
    } else if (operator == 42) {
        result = fst_number*snd_number;
    } else if (operator == 47) {
        result = fst_number/snd_number;
    } else if (operator == 37) {
        result = fst_number%snd_number;
    }

    printf(BBLU"%d"BLU" %c "BBLU"%d"BLU" = "BCYN"%.2f"CRESET"\n", fst_number, operator, snd_number, result);
    exit(0);
}