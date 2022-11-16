#include <stdio.h>
int main(){
    // first code on pointers:-

    // POINTERS - Variables that stores address of another variabls.

    int a;

    a=10;

    int *p;   // pointer variable which will store the address

    p = &a;   // refrencing operator 

    printf("%d\n",p);    // address of a
    printf("%d\n",&a);   // address of a
    printf("%d\n",&p);   // address of p
    printf("%d\n",*p);    // value of a    ( *p is dereferencing operator)

    return 0;
}

// output:- 
//              6422300
//              6422300
//              6422296
//              10