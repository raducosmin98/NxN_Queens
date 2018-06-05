#include <stdio.h>
#include <stdlib.h>
#include "queen.h"

void bt(int* v, int k, int n,int *sol)
{

    for (int i=1; i<=n; i++)
    {
        v[k]=i;

        int ok=1;
        for (int x=1; x<k; x++)
            if ((v[x]==v[k])||(abs(v[k]-v[x])==(k-x)))
                ok=0;
        if(ok)
        {
            if(k==n)
            {   *sol=*sol+1;
                printf("Solution %d:\n",*sol);

                for (int a=1; a<=n; a++)
                {
                    for (int b=1; b<=n; b++)
                        if (v[a]==b)
                            printf(" Q ");
                        else printf(" _ ");
                    printf("\n ");


                }

            }


            else
                bt(v,k+1,n,sol);

        }
    }

}
