// take input total no and Parts no then calculate percentage
//  use percentage = (parts/whole)*100

#include<stdio.h>
void main()
{
    float t,p;
    float per;
    
    printf("enter the total no\n");
    scanf("%f",&t);
    
    printf("enter the no for we want percentage\n");
    scanf("%f",&p);

    p=p*100;
    per=p/t;
    printf("result       : %.2f %%",per);
}
