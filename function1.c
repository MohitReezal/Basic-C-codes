#include<stdio.h>
void area();
int main(){
    area();
    return 0;
}
void area(){
int a,b,area;
printf("Enter the value of length and breadth");
scanf("%d %d", &a,&b);
area=a*b;
printf("Area is %d",area);


}
