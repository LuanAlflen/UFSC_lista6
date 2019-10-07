/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N,i;
    float H=0;
    printf("valor de N:\n");
    scanf("%i", &N);
        
        for(i=1;i<=N;i++){
            H = H + (1.0/i);
        }
        printf("%f", H);
    return 0;
}
