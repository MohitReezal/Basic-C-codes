#include<stdio.h>
int factorial(int num){
if(num==1 || num==0){
return 1;
}
else { 
    return (num*factorial(num-1));
}
}
int main() {
    int n;
printf("Enter the value of n");
scanf("%d",&n);
printf("the factorial of n is %d",factorial(n));
return 0;
}