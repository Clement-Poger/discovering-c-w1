#include <stdio.h>

int main() {
    int nb;
    int count = 0;
    printf("Enter a number between 0 and 100: ");
    scanf("%d", &nb);
    if (0 <= nb <= 100){
        while (count <= nb) {
            printf("%d, ", count);
            count += 5;
        }
        printf("\n >> Your Input: %d\n", nb);
    } else {
        printf("\n >> Invalid Input! %d isn't between 0 and 100.\n", nb);
    }
}