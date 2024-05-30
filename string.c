#include<stdio.h>
#include<string.h>
int main(){
char str[10];
int i;
printf("Enter the string ");
scanf("%s",str);
for(i=0;str[i] !='\0'; ++i);
printf("The length of string is %d",i);
}