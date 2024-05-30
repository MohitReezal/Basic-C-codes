//write a program to calculate simple interest, Mohit Reezal
#include <stdio.h>
int main(){
float p,t,r, i ;
printf("enter the value of p");
scanf("%f",&p);
printf("enter the value of t");
scanf("%f",&t);
printf("enter the value of r");
scanf("%f",&r);
printf("simple interest is %f",i=(p*t*r)/100);
return 0;
}