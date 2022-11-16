//satyarth
#include <stdio.h>
int main(){
   
    int a= 10;
    int *p = &a; 

    // int is of size 4 bytes , thus each data takes 4bytes of memory space .
    printf("%d\n",p);   //suppose this gives 2002

    printf("%d\n",p+1);  // then this gives 2002+4 = 2006 , bcz 4 bytes are occupied from 2002 memory location.
    

    return 0;
}