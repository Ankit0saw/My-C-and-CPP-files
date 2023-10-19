//enter any no then display the sum of all digits

#include<stdio.h>

int sum(int n){
    int rem,res=0;
    while(n>0){
        rem=n%10;
        res=res+rem;
        n=n/10;
    }
    return res;
}

int main(){
    int num;
    printf("enter the no :");
    scanf("%d",&num);

    printf("%d",sum(num));
    return 0;
}
