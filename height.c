#include<stdio.h>
int main(){
float h;
int n=0;
printf("Enter your height");
scanf("%f",&h);
do{
h=0.8*h;
n=n+1;
}while(h>0.2);
printf("No. of bounces=%d",n);
return 0;
}