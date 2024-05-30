#include<stdio.h>
int main(){
int a,i;
printf("Enter Your number");
scanf("%d",&a);
for(i=2;i<=a;i++){
if(a%i!=0)
printf("Your number is prime");
}