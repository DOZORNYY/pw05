#include <stdio.h>

int main(void) {
    int n, k, v1, v2, v3, v4, v5;

    n = 5;
    k = 0;

    v1 = (n % 30) + 1;
    v2 = ((n + (k + 6)) % 30) + 1;
    v3 = ((n + (k + 12)) % 30) + 1;
    v4 = ((n + (k + 18)) % 30) + 1;
    v5 = ((n + (k + 22)) % 30) + 1;

    printf("Вариант 1: %d\n", v1);
    printf("Вариант 2: %d\n", v2);
    printf("Вариант 3: %d\n", v3);
    printf("Вариант 4: %d\n", v4);
    printf("Вариант 5: %d\n", v5);

    return 0;
}