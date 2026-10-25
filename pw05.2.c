#include <stdio.h> 

int main(void) {
    int i, j;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("1 ");
        }
        
        printf("\n");
    }

    // j идёт от 1 до i, то есть зависит от внешнего i, поэтому в каждой
    // новой строке на одну единицу больше получается нижний треугольник
    return 0;
}