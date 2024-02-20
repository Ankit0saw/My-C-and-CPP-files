// the output is displaying size of basic data types of c language (i.e. int, char, float, double, etc)

#include<stdio.h>
#include<stdbool.h>

void main(){
    bool a;
    char b;
    int c;
    float d;
    double f;
    long g;
    long long int h;
    long double i;

    printf("\nprinting sizes............");
    printf("\nbool           :%d",sizeof(a));
    printf("\nchar           :%d",sizeof(b));\
    printf("\nint            :%d",sizeof(c));
    printf("\nfloat          :%d",sizeof(d));
    printf("\ndouble         :%d",sizeof(f));
    printf("\nlong           :%d",sizeof(g));
    printf("\nlong long int  :%d",sizeof(h));
    printf("\nlong double    :%d",sizeof(i));
}
