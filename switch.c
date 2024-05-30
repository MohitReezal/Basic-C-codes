#include<stdio.h>
int main(){
int a,b,sum,sub,mul,div,choice;
printf("Enter the value of a, \nb");
scanf("%d%d",&a,&b);
printf("1) Sum");
printf("\n2) subtraction");
printf("\n3) multiplication");
printf("\n4) division;");
printf("\nEnter your choice");
scanf("%d",&choice);
switch(choice){
case 1 : 
sum=a+b;
printf("The sum is %d",sum);
break;
case 2 :
sub=a-b;
printf("Subtraction is %d",sub);
break;
case 3 :
mul=a*b;
printf("multiplication is %d",mul);
break;
case 4:
div=a/b;
printf("Division is %d",div);
break; 
default :
printf("invalid choice");
}
return 0;
}