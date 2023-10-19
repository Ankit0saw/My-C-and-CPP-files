#include<stdio.h>

char checklp(int year){
    if(year%100==0 && year%400==0)
        printf("leap year\n");
    else if(year%100!=0 && year%4==0)
        printf("leap year\n");
    else 
        printf("not a leap year\n");
}
int main(){
    int yr;
    printf("enter any year to check :\n");
    scanf("%d",&yr);

    printf("%c",checklp(yr));
    return 0;
}
