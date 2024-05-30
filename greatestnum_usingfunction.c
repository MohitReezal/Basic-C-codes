#include<stdio.h>
void greatnum();
int main(){
greatnum();
return 0;
}
void greatnum(){
int a,b;
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
if(a>b){
printf("the greatest number is %d",a);}
else{
printf("the greater number is %d",b);}
}
