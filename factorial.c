#include<stdio.h>
int main(){
int i,a,sum=1;
printf("Enter the value of a");
scanf("%d",&a);
for(i=1;i<=a;i++){

sum=sum*i;
}
printf("the value is %d",sum);
}