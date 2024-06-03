#include<stdio.h>
int main()
{
    float p,r,t,si=0,mul=0;
    printf("ENTER THE PRINCIPAL AMOUNT= ");
    scanf("%f",&p);
    printf("ENTER THE RATE OF INTEREST PER AMOUNT= ",r);
    scanf("%f",&r);
    printf("ENTER THE TIME PERIOD IN YEAR= ",t);
    scanf("%f",&t);
    mul=p*r*t;
    si=mul/100;
    printf("\nTHE INTEREST FOR THE LOAN= %f",si);
    return 0;
}
