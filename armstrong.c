#include<stdio.h>
int main(){
int a,b,sum=0,num;
printf("Enter your three digit number");
scanf("%d",&a);
num=a;
while(a!=0){
b=a%10;
sum=sum+b*b*b;
a=a/10;
}
if(num==sum)
printf("Armstrong number",num);
else
printf("Not a Armstrrong Number",num);
}