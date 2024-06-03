#include<stdio.h>
int main(){
int n,i,r=0,sum=0;
printf("ENTER THE NUMBER: ");
scanf("%d",&n);
while(n>0){
    r=n%10;
    sum=sum+r;
    n=n/10;
}
printf("\nTHE SUM OF ALL DEGITS IN THE NUMBER IS: %d",sum);
return 0;
}
