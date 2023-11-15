// enter the no and check it is armstrong or not
// let N=153, hence total digits is 3
// therefore, 1^3 + 5^3 + 3^3 = 153 

#include<stdio.h>
#include<math.h>
int main(){
    int num,rem=0,res=0,count=0;
    int n1,n2;

    printf("enter any no :");
    scanf("%d",&num);

    n1=num;
    n2=num;
    while(n1>0){
        n1=n1/10;
        count++;
    }

    while(n2>0){
        rem=n2%10;
        res=pow(rem,count)+res;
        n2=n2/10;
    }

    if(res==num)
        printf("it is armstrong no");
    else
        printf("not a armstrong no");
}
