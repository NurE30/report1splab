#include<stdio.h>
int main(){
int i,n,count=0;
printf("ENTER THE NUMBER: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    if(n%i==0)
    {

     count++;
    }
}
if(count==2)
    printf("\nTHE NUMBER %d IS A PRIME NUMBER",n);

    else
        printf("\nTHE NUMBER %d IS NOT A PRIME NUMBER",n);
return 0;
}
