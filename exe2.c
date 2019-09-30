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
     int ano ;
    printf("digite o ano \n");
    scanf("%i", &ano);
    
    if(ano > 0){
        if(ano % 400 == 0){
        printf("é um ano bisexto");
        }else{
            if((ano % 4 == 0) && (ano % 100 != 0)){
                printf("é um ano bisexto");
            }else{
                printf("não é bisexto");   
            }
            printf("não é bisexto");
        }
        printf("não é bisexto");  
    }else{
        printf("não é bisexto");
    }
    
    return 0;

}
