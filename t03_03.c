#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n, i;
    double sum = 0.0;
    double average;
    int max_val = 0;
    int min_val = 101;
    
    scanf("%d", &n);

    double *values = (double *)malloc(n * sizeof(double));
    if (values == NULL) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        int current_value;
        scanf("%d", &current_value);
        values[i] = (double)current_value;
        sum += values[i];

        if (current_value > max_val) {
            max_val = current_value;
        }
        if (current_value < min_val) {
            min_val = current_value;
        }
    }

    if (n > 0) {
        average = sum / n;
    } else {
        average = 0.0;
        max_val = 0;
        min_val = 0;
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

    int range = max_val - min_val;
    printf("%d\n", range);

    free(values);

    return 0;
}
