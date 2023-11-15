// take integer input from user and tell whether it is palindrome or not
// let n=121 it is palindrome 

#include<stdio.h>
int main(){
    int num,n,rem=0,res=0;

    printf("enter the no :");
    scanf("%d",&num);

    n=num;
    while(num>0){
          rem=num%10;
          res=res*10+rem;
          num=num/10;
    }
    if(res==n)
      printf("it is palindome");
    else
      printf("not a palindrome");
}
