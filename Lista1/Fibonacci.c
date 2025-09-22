#include <stdio.h>


int fibonacciRecursiva(int n){

    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacciRecursiva(n - 1) + fibonacciRecursiva(n - 2);
    }
}

int main() {

    int n;

    scanf("%d", &n);
    printf("O %d termo da sequencia de Fibonacci e %d.\n", n, fibonacciRecursiva(n));

    return 0;
}