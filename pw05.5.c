#include <stdio.h>
#include <math.h>

double calc(double a, double b) {
    return (a - b) / sqrt(a * a - b * b);
}

int main(void) {
    double a, b;

    printf("Введите два значения: ");

    while (scanf("%lf %lf", &a, &b) == 2) {
        if (a * a - b * b <= 0) {
            printf("Ошибка: \n");
        } else {
            printf("Результат: %.4f\n", calc(a, b));
        }
    }

    // double вместо float точнее (больше значащих цифр, меньше ошибок округления).
    // return отдаёт значение в main и сразу завершает функцию
    return 0;
}