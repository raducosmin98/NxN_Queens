#include<stdio.h>
#include <stdlib.h>
#include "queen.h"

void printSolution(int **board,int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}

int isSafe(int **board, int row, int col,int N)
{
    int i, j;

    /* Check this row on left side */
    for (i = 0; i < col; i++)
        if (board[row][i])
            return 0;

    /* Check upper diagonal on left side */
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j])
            return 0;

    /* Check lower diagonal on left side */
    for (i=row, j=col; j>=0 && i<N; i++, j--)
        if (board[i][j])
            return 0;

    return 1;
}

int solveNQUtil(int **board, int col,int N)
{

    if (col >= N)
        return 1;

    for (int i = 0; i < N; i++)
    {

        if ( isSafe(board, i, col,N) )
        {

            board[i][col] = 1;


            if ( solveNQUtil(board, col + 1,N) )
                return 1;


            board[i][col] = 0; // BACKTRACK
        }
    }


    return 0;
}


int solveNQ(int **board,int N)
{


    if ( solveNQUtil(board, 0, N) == 0 )
    {
      printf("Solution does not exist");
      return 0;
    }

    printSolution(board,N);
    return 1;
}
