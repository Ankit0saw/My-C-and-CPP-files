//enter any no then display the no of zeroes in its factorial
//eg: N=5 then 5!=120 therefor output=1

#include<stdio.h>
int main(){
    int n;
    printf("enter any no :");
    scanf("%d",&n);

    //method 1 solved with the help of internet
    int num=0;
    while(n>0){
        num=num+n/5;
        n=n/5;
    }
    printf("Trailing zeros :%d",num);

    //method 2
    
}
