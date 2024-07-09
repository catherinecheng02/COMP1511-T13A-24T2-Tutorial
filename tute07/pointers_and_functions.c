#include <stdio.h>

void halve_values(int *num_1, int *num_2, int *num_3);

int main(void) {
    int n1 = 4;
    int n2 = 10;
    int n3 = 16;

    printf("Values before halved:\n");
    printf("Num 1: %d\n", n1);
    printf("Num 2: %d\n", n2);
    printf("Num 3: %d\n", n3);

    halve_values(&n1, &n2, &n3);

    printf("Values after halved:\n");
    printf("Num 1: %d\n", n1);
    printf("Num 2: %d\n", n2);
    printf("Num 3: %d\n", n3);

    return 0;
}

void halve_values(int *num_1, int *num_2, int *num_3) {
    *num_1 = *num_1 / 2;
    *num_2 = *num_2 / 2;
    *num_3 = *num_3 / 2;
}
