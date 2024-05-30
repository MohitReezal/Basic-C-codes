#include<stdio.h>
#include<string.h>
int main(){
char str[20][10],temp[20];
int n,i,j;
printf("How many ??");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter the name of students");
scanf("%s",str[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
        }}}
        printf("Name of stds in alphabetivcal order is ");
        for(i=0;i<n;i++){
           printf("%s",str[i]);
            printf("\n");
        }
}