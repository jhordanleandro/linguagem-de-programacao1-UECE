#include <stdio.h>

int main() {
    int numerador = 1;
    float denominador = 1.0;
    float S = 0.0;

    while (numerador <= 99 && denominador <= 50) {
        S += numerador / denominador;
        numerador += 2;
        denominador++;
    }

    printf("O valor de S e: %.2f\n", S);

    return 0;
}
