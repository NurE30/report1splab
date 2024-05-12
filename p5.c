#include <stdio.h>

int main() {
    int size, i;
    float sum = 0, average=0;


    printf("Enter the size of the array: ");
    scanf("%d", &size);


    int arr[size];


    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }


    average = sum / size;


    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
