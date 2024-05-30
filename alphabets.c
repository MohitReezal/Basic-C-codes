#include<stdio.h>
int main(){
char c;
printf("enter the value of c=");
scanf("%c",&c);
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
printf("It is a alphabet");
else if(c>='0' && c<='9')
printf("it is a digit");
else
printf("it is a special character");
}