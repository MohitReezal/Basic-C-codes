#include<stdio.h>
int main(){
char a,b; int c;
float cost;
printf("Enter your name");
scanf("%s", &a);
printf("Enter your adress");
scanf("%s",&b);

printf("\n Enter your unit" );
scanf("%d",&c);
if(c<=20){
cost= 100+80;
printf("Your bill is %f",cost);}
else if((c>20)&&(c<=70)){
cost = 100+c*6.5 ;
printf("Your cost is %f",cost);}
else if (c>70){
cost =100+c*8;
printf("Your cost is %f",cost);}
getch();
return 0;
}