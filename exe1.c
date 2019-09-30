/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b,c ;
    printf("digite \n");
    scanf("%i%i%i", &a,&b,&c);
    if(a>b && a>c){
        if(b>c){
            printf("%i, %i, %i",a,b,c);
        }else{
            printf("%i, %i, %i",a,c,b);
        }
    }else{
        if(b>a && b>c){
            if(a>c){
                printf("%i, %i, %i",b,a,c);
            }else{
                printf("%i, %i, %i",b,c,a);
            }
        }else{
            if(a>b){
                printf("%i, %i, %i",c,a,b);                
            }else{
                printf("%i, %i, %i",c,b,a);
            }
        }
    }    
    
    return 0;

}
