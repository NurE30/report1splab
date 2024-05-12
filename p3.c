#include <stdio.h>

int main() {
    int a, n, sum = 0, count = 0;
    float average;

    printf("Enter the start of the range: ");
    scanf("%d", &a);
    printf("Enter the end of the range: ");
    scanf("%d", &n);


    for (int i = a; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
            count++;

        }
    }


     average = (float)sum / count;

    printf("Sum of odd numbers between %d and %d is: %d\n", a, n, sum);
    printf("Average of odd numbers between %d and %d is: %.2f\n", a, n, average);

    return 0;
}
