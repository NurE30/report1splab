#include<stdio.h>
#include<string.h>
int main(){
char str1[100],str2[100];
printf("\nENTER THE STRING= ");
gets(str1);
strcpy(str2,str1);
strrev(str2);
if(strcmp(str1,str2)==0)
{
    printf("THE STRING IS PALINDROME");
}
else
{
    printf("THE STRING IS NOT PALINDROME");
}
return 0;
}
