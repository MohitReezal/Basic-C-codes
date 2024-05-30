#include<stdio.h>

void input (int a[5]);

void process(int a[5]);

void output (int a[5]);

int main()

{

    int a[5];

    input(a);

    process(a);

    output(a);

    return 0;

}

void input (int a[5])

{

    for (int i=0;i<5;i++)

    {

        printf("Enter the Number:\n");

        scanf("%d",&a[i]);

    }

}

  void process(int a[5]) 

  { 

    int temp;

    for (int i=0;i<5;i++)

    {

        for(int j=i+1;j<5;j++)

        {

        if(a[i]>a[j])

        {

            temp = a[i];

            a[i] = a[j];

            a[j]=temp;

        }

        }

    }

  }

  void output (int a[5])

  {

    printf("Sorted List\n");

    for (int i=0;i<5;i++)

    {

        printf("%d\t",a[i]);

    }

}