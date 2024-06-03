#include<stdio.h>
int main(){
int arr[100],i,n,size;
printf("ENTER THE SIZE OF THE ARRAY: ");
scanf("%d",&size);

for(i=0;i<size;i++){
        printf("\nENTER THE %d ELEMENT: ",i+1);
    scanf("%d",&arr[i]);
}

printf("\nENTER THE ELEMEN YOU WANT TO SEARCH: ",n);
scanf("%d",&n);
for(i=0;i<size;i++){
    if(n==arr[i])
        printf("\nTHE NUMBER IS FOUND IN THE %d POSITION",i+1);


}
printf("\nSORRY! THE NUMBER IS NOT IN THIS ARRAY.");
return 0;
}

