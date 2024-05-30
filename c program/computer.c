#include<stdio.h>
int main(){
    char a[9]="computer";
    int s=0;
    for(int i=1;i<9;i++)
    {
        for(int j=s;j<8;j++){
    printf("%c",a[j]);
        }
        printf("\n");
        s=s+1;
    }
}