#include<stdio.h>
int main(){
                int i,j,a,n;
                printf("Enter the lower number:");
                scanf("%d",&a);
               printf("Enter the upper number:");
                scanf("%d",&n);
                for(i=a;i<=n;i++){
                                for(j=2;j<i;j++){
                                                if(i%j==0)
                                                                break;
                                }
                                if(i==j)
                                                printf("%d ",i);
                }
}
