#include<stdio.h>
#include <stdlib.h>
#include "queen.h"

// driver program to test above function
int main()
{
    int N;
    printf("Give the size of the table:");
    scanf("%d",&N);
    int **board;
    board=calloc(N,sizeof(int *));
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            board[j]=calloc(N,sizeof(int));

    solveNQ(board,N);
    return 0;
}
