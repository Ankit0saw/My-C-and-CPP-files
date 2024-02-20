//don't need to input anything 
// it will tell the output according to the created union and structure functions in the program

#include<stdio.h>

struct s_tag{
    int x;
    char y;
    long long int z;
};

union u_tag{
    int a;
    char b;
    long long int c;
};

int main(){
    struct s_tag st;
    union u_tag un;
    printf("\nMenomry allocation of structure  :%d", sizeof(st));
    printf("\nMemory alloaction of union  :%d", sizeof(un));
    return 0;
}
