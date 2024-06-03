#include<stdio.h>
int main()
{
    int n,i,mul=1;
    printf("ENTER THE A NON NEGATIVE NUMBER= ");
    scanf("%d",&n);
    if(n>0)
    {
        for(i=1;i<=n;i++){
            mul*=i;
        }
        printf("THE FACTORIAL OF THE NUMBER IS=%d",mul);
    }
}
