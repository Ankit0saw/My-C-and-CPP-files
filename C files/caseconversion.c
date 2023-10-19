//enter character and the perform case conversion
//i.e. lower case to upper case and vice versa

#include<stdio.h>
int main(){
    char ab,cd;
    printf("enter a single character :");
    scanf("%c",&ab);
    
    if(ab>=65 && ab<=90){
        cd=ab+32;
        printf("After conversion :%c",cd);
    }
    else if(ab>=97 && ab<=122){
        cd=ab-32;
        printf("after conversion :%c",cd);
    }
    else  {
        printf("enter valid input please!!!");
    }
}
