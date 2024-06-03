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
    printf("\nTHE 2ND SMALLEST NUMBER IS: %d",arr[1]);
    printf("\nTHE 2ND LARGEST NUMBER IS: %d",arr[n-2]);

    if(arr[1]%2==0){
        int sum=0;
        sum=arr[1]+2;
        printf("\nTHE 2ND SMALLEST NUMBER IS EVEN, FOR THAT THE RESULT IS: %d",sum);
    }
    else {
        int sub=0;
        sub=arr[1]-2;
        printf("\nTHE 2ND SMALLEST NUMBER IS ODD, FOR THAT THE RESULT IS: %d",sub);
    }
    if(arr[n-2]%2==0){
       int mul=0;
        mul=arr[n-2]*2;
        printf("\nTHE 2ND LARGEST NUMBER IS EVEN, FOR THAT THE RESULT IS: %d",mul);
    }
    else {
        int half=0;
        half=arr[n-2]/2;
        printf("\nTHE 2ND LARGEST NUMBER IS ODD, FOR THAT THE RESULT IS: %d",half);
    }

    return 0;
}
