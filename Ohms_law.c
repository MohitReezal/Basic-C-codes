//write a program to verify ohm's law;;
#include <stdio.h>
int main(){
int I,R,V ;
printf("enter the value of I");
scanf("%d", &I);
printf("enter hte value of R");
scanf("%d", &R);
V=I*R;
printf("the value of V is %d",V);
return 0;
}