#include<stdio.h>
int main(){
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

return 0 ;
}