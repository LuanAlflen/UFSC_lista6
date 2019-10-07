/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N,i, ultimo=0,atual=1;
    printf("\ndigite um valor:");
    scanf("%i",&N);
    
    if(N>3){
        for(i=1;i<=N;i++){
           atual= ultimo + atual;
		    ultimo= atual - ultimo;
            //printf("%i", atual);
        }
        printf("ultimo: %i",ultimo);
    }
    return 0;
}
