
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int A[5]={2, 4, 6, 8, 10};
    int *P;
    int i;
    P= (int *)malloc(5*sizeof(int));
    P[0]=3;
    P[1]=5;
    P[2]=7;
    P[3]=9;
    P[4]=11;

    for(i=0;i<5; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    for(i=0; i<5; i++)
    {
        printf("%d ", P[i]);
    }
    return 0;
}