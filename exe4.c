/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
     int x,d1=0,d2=0;
    printf("digite um numero \n");
    scanf("%i", &x);
    
    if(x>1111 && x<=9999){
        d1 = x/100;
        d2 = (d1*100)- x;
        d2 = d2*-1;
        printf("%i e %i\n",d1,d2);
        if(sqrt(x) == (d1+d2)){
          printf("correto");  
        }else{
            printf("errado");
        }
    }
    
    
    return 0;

}
