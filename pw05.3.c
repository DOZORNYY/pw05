#include <stdio.h>
#include <math.h>

int main(void) {
    int n;

    printf("Введите кол-во слогаемых: ");

    while(scanf("%d", &n) == 1 && n > 0) {
        double sum = 0.0;
        for (int i = 1; i <= n; i++) {
            sum += 1.0 / sqrt(i);

        }
    
    printf("SUM: %.6f\n", sum);
    }

    // sum = 0.0 (double), а не int 0: слагаемые дробные, и если сделать
    // int, дробная часть при += отбросится, сумма выйдет неверной
    return 0;
}