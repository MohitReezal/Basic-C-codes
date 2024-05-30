#include <stdio.h>

struct student
{
    char name[50];
    int rollno;
    char department[50];
    char subject[50];
    char result;
};
// struct student s[15];

int main()
{
     struct student s[15];

    int i, n;
    printf("enter the number: ");
    scanf("%d", &n);
    printf("--------------------------\n");
    for (i = 1; i <= n; i++)
    {
        printf("enter the name \n");
        scanf("%s", s[i].name);
        printf("--------------------------\n");

        printf("enter the roll\n");
        scanf("%d", &s[i].rollno);
        printf("--------------------------\n");

        printf("enter the department\n ");
        scanf("%s", s[i].department);
        
        
      
        int Maths, Science, English, Social, Account, per, total;
         printf("Enter the marks of the subjects\n");
         scanf("%d%d%d%d%d", &Maths, &Science, &English, &Social, &Account);
      
  
        if (Maths >= 40 && Science >= 40 && English >= 40 && Social >= 40 && Account >= 40)
        {
            printf("PASS!!!!!\n");
            total = Maths + Science + English + Social + Account;
            printf("Total marks %d\n", total);
            per = total / 5;
            printf("Total percentage %d\n", per);
            if (per >= 80)
            {
                printf("Distinction\n");
            }

            else if (per < 80 && per >= 60)
            {
                printf("First Division\n");
            }
            else if (per >= 50 && per < 60)
            {
                printf("Second division\n");
            }

            else
            {
                printf("FAIL....");
            }
        }
        

printf("  name\t  rollno\t department\t\n ");
        printf(" %s", s[i].name);

        printf("   %d", s[i].rollno);
        printf("        %s\n", s[i].department);

    }
    return 0;
}