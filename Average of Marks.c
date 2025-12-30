#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;
    float avg;

    printf("Enter your 5 subjects marks:\n");

    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 5.0;

    printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}
