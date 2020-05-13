#include <stdio.h>

int PathCounting(int m, int n)
{
    int ctr[m][n];
    int i,j;
    for ( i = 0; i < m; i++)
        {
		ctr[i][0] = 1;
		}
    for ( j = 0; j < n; j++)
        {
		ctr[0][j] = 1;
		}
    for ( i = 1; i < m; i++)
    {
        for ( j = 1; j < n; j++)
            { 
			ctr[i][j] = ctr[i-1][j] + ctr[i][j-1];
			}
    }
    return ctr[m-1][n-1];
}
 
int main()
{
    int p,q;
    printf("enter no. of rows of matrix ");
    scanf("%d",&p);
    printf("enter no. of column of matrix ");
    scanf("%d",&q);
	printf("The size of matrix is : %d, %d\n",p,q);
	printf("The all possible paths from top left to bottom right is: %d \n",PathCounting(p,q));
}
