//without using math.h header file
//find square root of any no

#include<stdio.h>
int main(){
    float n,num,sqrt,temp;

    // method 1
    printf("enter the no :");
    scanf("%f",&n);
    
    num=n;
    sqrt=num/2;
    temp=0;
    while(sqrt!=temp)
    {
        temp=sqrt;
        sqrt=(num/temp+temp)/2;
    }
    printf("square root is :%.2f",sqrt);

    //method 2
    float i;
    for(i=0.001;i*i<n;i=i+0.001);
    printf("\nsquare root using 2nd method :%.2f",i);
}
