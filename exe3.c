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
     int x,centena=0,dezena=0,unidade=0;
    printf("digite um numero \n");
    scanf("%i", &x);
    
    if(x>99 && x<=999){
        centena = x/100;
        dezena = (x%100)/10;
        unidade = x%10;
        printf("%i%i%i", unidade, dezena, centena);
    }
    
    
    return 0;

}
