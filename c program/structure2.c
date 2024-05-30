#include<stdio.h>
#include<string.h>
struct student{
int roll;
char name[20];
char department[10];
int result;
float per;
};

int main(){
struct student s[15];
int n,i,j;
printf("Enter the number of students");
scanf("%d",&n);
for(i=0;i<=n;i++){
printf("Enter the roll");
scanf("%d",&s[i].roll);
printf("Enter the name of students");
scanf("%s",&s[i].name);
printf("Enter the department");
scanf("%s",&s[i].department);

int physics,chem,math,bio,eng,total,percentage;
printf("Enter your marks physics,\nchem,\nmath,\nbio,\neng");
scanf("%d%d%d%d%d",&physics,&chem,&math,&bio,&eng);
if((physics>=40)&&(chem>=40)&&(math>=40)&&(bio>=40)&&(eng>=40)){
printf("RESULT= PASS");
total= physics+chem+math+bio+eng;
printf("\nYour total marks is %d", total);
percentage=total/5;
printf("\npercentage =%d", percentage);
if((percentage>40)&&(percentage<50))
printf("\nThird division");
else if((percentage>50)&&(percentage<60))
printf("\nSecond division");
else if((percentage>60)&&(percentage<80))
 printf("\nFirst divsion");
else if(percentage>80)
printf("\nDistinction");}

else
printf("\nFail");
}
for(j=0;j<=n;j++){
printf("  name\t  rollno\t department\t\n ");
        printf(" %s", s[i].name);

        printf("   %d", s[i].roll);
        printf("        %s\n", s[i].department);

}

return 0 ;
}
