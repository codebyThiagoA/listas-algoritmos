#include <stdio.h>

int main() {
    int dv, dw;

    scanf("%d %d", &dv, &dw);

    float v[dv], w[dw];

    for (int i = 0; i < dv; i++) {
        scanf("%f", &v[i]);
    }

    for (int j = 0; j < dw; j++) {
        scanf("%f", &w[j]);
    }

    for (int i = 0; i < dv; i++) {
        for (int j = 0; j < dw; j++) {
            printf("%.2f", v[i] * w[j]);
            if (!(i == dv - 1 && j == dw - 1)) {
                printf(" ");
            }
        }
    }
    printf("\n");

    return 0;
}
