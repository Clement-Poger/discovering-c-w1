#include <stdio.h>

int main() {
    int nb;
    int fact = 1;
    int count = 1;
    printf("Enter a number between 2 and 20: ");
    scanf("%d", &nb);
    if (2 <= nb <= 20){
        while (count <= nb) {
            fact *= count;
            count++;
        }
        printf("\n >> %d! = %d\n", nb, fact);
    } else {
        printf("\n >> Invalid Input! %d isn't between 2 and 20.\n", nb);
    }
}