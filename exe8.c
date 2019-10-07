#include <stdio.h>
#include <stdlib.h>

int main()
{
    float H;
    int N, i;
    H = 1;
    printf("\nvalor de N:");
    scanf("%i", &N);
    for(i=2;i<N;i++){
        H = H + 1/i;
    }
    printf("%f", H);
    return 0;
}
