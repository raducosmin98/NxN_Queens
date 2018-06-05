#ifndef QUEEN_H_INCLUDED
#define QUEEN_H_INCLUDED

void printSolution(int **board,int N);
int isSafe(int **board, int row, int col,int N);
int solveNQUtil(int **board, int col,int N);
int solveNQ(int **board,int N);


#endif // QUEEN_H_INCLUDED
