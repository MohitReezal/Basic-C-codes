#include<stdio.h>
struct student{
int roll;
char name[15];
char department[10];
int total;
float per;
int phy,chem,maths;
};
int main(){
    struct student s[20];
    int n,i,j,phy,chem,maths;
printf("Enter the number of students");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\nEnter the roll no");
scanf("%d",&s[i].roll);
printf("Enter the name of student");
scanf("%s",&s[i].name);
printf("Enter the department");
scanf("%s",&s[i].department);
printf("Enter the marks of physics:\n chem:\n maths");
scanf("%d %d %d",&s[i].phy,&s[i].chem,&s[i].maths);
s[i].total= s[i].phy+s[i].chem+s[i].maths;
printf("Total =\n",s[i].total);
s[i].per= (s[i].total)/3;
printf("%f",s[i].per);
if(s[i].per>40 && s[i].per<60){
printf("Third division");}
if(s[i].per>60 && s[i].per<70){
    printf("second division");}
    if(s[i].per>70 && s[i].per<80){
        printf("first division");}
        if(s[i].per>40 && s[i].per<50){
            printf("Distinction");}
printf("****************************\n");
printf("Name of student :%s\t",s[i].name);

printf("Roll no %d\t ",s[i].roll);
printf("Department %s\t: ",s[i].department);
printf("percentage %f: ", s[i].per);
}
return 0;
}