#include <stdio.h>
#include <math.h>

int main(void) {
    int i;
    double a, b, h, x, y;

    i = 1;
    a = 0.0;
    b = M_PI;
    h = 0.5;

    printf("    Таблица значений Y = cos(x)    \n");
    printf("Интерации\tX\t\tY\n");

    for (double x = a; x <= b + 0.0001; x += h) {
        y = cos(x);
        printf("%d\t\t%.4f\t\t%.4f\n", i, x, y);
        i++;
    }

    // x += h копит ошибку double, и в конце x может стать чуть больше b
    // тогда последняя точка пропадёт, 0.001, чтобы цикл точно дошёл до конца,
    // в моём случае это ничего не изменит: b = пи, шаг 0.5, цикл закончится на 3.0
    return 0;
}