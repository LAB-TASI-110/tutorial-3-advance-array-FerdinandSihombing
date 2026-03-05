#include <stdio.h>

int main() {
    int n, i;
    double value;
    double sum = 0.0;
    double average;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%lf", &value);
        sum += value;
    }

    if (n > 0) {
        average = sum / n;
    } else {
        average = 0.0;
    }

    printf("%.0f\n", sum);
    printf("%.2f\n", average);

    return 0;
}
