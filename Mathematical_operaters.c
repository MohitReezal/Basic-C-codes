//WAP to mathmatical operators //Mohit Reezal//2022-06-05
#include<stdio.h>
int main()
{
int a,b,sum,sub,mul,div,mod;
printf("enter the value of a");
scanf("%d", &a);
printf("enter the value of b");
scanf("%d",&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("the sum is %d", sum);
printf("\n subraction is %d",sub);
printf("\n multiplication is%d", mul);
printf("\n quotient is %d",div);
printf("\n remainder is %d", mod);
return 0;
}