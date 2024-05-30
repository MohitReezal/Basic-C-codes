#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the 1st value: ");
scanf("%d",&a);
printf("enter the 2nd value");
scanf("%d",&b);
printf("Enter the 3rd value");
scanf("%d",&c);
if(a>b){
if(a>c)
printf("1st value is greater %d",a);
else
printf("3rd value is greater %d", c);
}
if(b>c)
printf("2nd value is greater %d",b);
else 
printf("3rd value is greater %d",c);

return 0;
}