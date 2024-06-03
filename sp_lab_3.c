
#include<stdio.h>
int main(){
int n,num1=0,num2=1,num3,i;
printf("HOW MANY TERM YOU WAMT TO SEE= ");
scanf("%d",&n);

printf("THE FIBONACCI SEQUENCE IS= %d %d",num1,num2);

for(i=3;i<=n;i++){
   num3=num1+num2;
    printf(" %d",num3);
    num1=num2;
    num2=num3;
    }
    printf("\n");
    }


