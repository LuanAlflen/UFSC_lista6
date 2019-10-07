/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N,i, F=1;
    printf("valor de N:\n");
    scanf("%i", &N);
        
        if(N != 0){
            for(i=1;i<=N;i++){
                F = F * i;
            }
            printf("fatorial: %i", F);
        }else{
            printf("fatorial: 1");
        
        }
        return 0;
}
