#include<stdio.h>

int main() {
    int arr[100], n, i, j, tem;

    printf("\nENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &n);

    printf("\nENTER THE ELEMENTS OF THE ARRAY: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n-1; j++) {
            if(arr[j] > arr[j+1]) {
                tem = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tem;
            }
        }
    }

    printf("\nTHE SORTED ARRAY: ");
    for(i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
