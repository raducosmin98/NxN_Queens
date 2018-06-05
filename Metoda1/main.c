#include <stdio.h>
#include <stdlib.h>
#include "queen.h"

int main()
{

    int n;
    int k=1;
    int sol=0;
    printf("Give the size of the chess board :");
    scanf("%d",&n);
    int *x=calloc(n,sizeof(int));
    bt(x,k,n,&sol);

    return 0;
}
