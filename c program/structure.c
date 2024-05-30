#include<stdio.h>
#include<string.h>
struct employee{
int id;
float salary;
char name[20];
}e1,e2;
int main(){
 e1.id=20;
 e1.salary=50000.2;
 strcpy(e1.name, "MOHIT REEZAL");
 printf("The ID /    SALARY:    /   NAME \n-----------------------------------\n %d  / Rs. %f / %s",e1.id,e1.salary,e1.name);
 return 0;
}