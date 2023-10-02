#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b;
    float per;
    printf("enter the for we want percentage\n");
    scanf("%f",&a);
    printf("enter the total no\n");
    scanf("%f",&b);

    a=a*100;
    per=a/b;
    printf("result       :%f\n",per);
    getch();
}

