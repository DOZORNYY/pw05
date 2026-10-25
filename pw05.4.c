#include <stdio.h>

int main(void) {
    double bell[8] = {1.0, 1.0, 2.0, 5.0, 15.0, 52.0, 203.0, 877.0};
    double sum = 0.0;

    for (int i = 0; i < 8; i++) {
        printf("%.2f ", bell[i]);
        sum += bell[i];
    }

    printf("\nСумма: %.2f\n", sum);

    // массив заполнен первыми 8 числами Белла (1, 1, 2, 5, 15, 52, 203, 877),
    // дальше в цикле считаю итоговую сумму
    return 0;
}