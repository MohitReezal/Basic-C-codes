#include<stdio.h>
int main(){
int a,t1=0,t2=1,sum;
printf("%d  %d" ,t1,t2);

for(a=0;a<=8;a++){
sum=t1+t2;
printf("  %d  ",sum);
t1=t2;
t2=sum;
}
}