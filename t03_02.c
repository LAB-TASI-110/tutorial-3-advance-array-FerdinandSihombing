#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    double sum = 0.0;
    double average;
    
    scanf("%d", &n);

    double *values = (double *)malloc(n * sizeof(double));
    if (values == NULL) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%lf", &values[i]);
        sum += values[i];
    }

    if (n > 0) {
        average = sum / n;
    } else {
        average = 0.0;
    }

    printf("%.0f\n", sum);
    printf("%.2f\n", average);

    int count_above_average = 0;
    for (i = 0; i < n; i++) {
        if (values[i] >= average) {
            count_above_average++;
        }
    }

    printf("%d\n", count_above_average);

    free(values);

    return 0;
}
