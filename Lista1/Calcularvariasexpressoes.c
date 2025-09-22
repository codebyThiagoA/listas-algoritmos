#include <stdio.h>
#include <math.h>

int main()
{
    double a = 1.5, b = 4, c = 2, d = 3, e = 1.2, f = 4.3;
    double expressao1 = ((b * a) - c) / f;
    double expressao2 = (f * a) + (d / e);
    double expressao3 = (b * d) - (f / e);
    double expressao4 = (a / a) - c;

    printf("a) %.16f\n", expressao1);
    printf("b) %.16f\n", expressao2);
    printf("c) %.16f\n", expressao3);
    printf("d) %.16f\n", expressao4);

    return 0;
}






