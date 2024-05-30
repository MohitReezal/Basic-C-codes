#include<stdio.h>
void swap(int *p,int *q){
int temp=*p;
*p=*q;
*q=temp;
}
int main(){
int a,b;
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("Swapped value of a is %d and b is %d",a,b);
return 0;
}