#include<stdio.h>
int main(){
int a,b,rev=0,num;
printf("Enter your number");
scanf("%d",&a);
num=a;
while(a!=0){
  b=a%10;
  rev=rev*10+b;
  a=a/10; 
}
//printf("Your reverse is %d",rev);
if(num==rev){
printf(" is palindrome number");}
else{
printf(" is not palindrome number");}
return 0;
}