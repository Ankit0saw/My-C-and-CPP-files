// enter any no to check whether it is represented in power of 2 
#include<stdio.h>
int main(){

    int num;
    printf("\nenter any no :");
    scanf("%d",&num);

    if(num==0)
      printf("\ncan not be represented");
    else if(num>0){
        int i= num & (num-1);
        if(i==0)
            printf("\ncan be represented");
        else
            printf("\ncan not be represented");
    }
    else
        printf("\ncan't accept negative nos.");
    
    return 0;
}