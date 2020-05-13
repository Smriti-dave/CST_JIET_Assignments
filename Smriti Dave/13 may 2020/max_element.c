//FINDING MAXIMUM FROM EACH ROW OF MATRIX...

#include <stdio.h>
int main()
{
  int m, n, i, j, matrix[100][100], maximum;

  printf("Enter the number of rows and columns of matrix\n");
  scanf("%d%d",&m,&n);

  printf("Enter the elements of the matrix\n");

  for (i = 0; i < m; i++)
    for(j = 0; j < n; j++)
      scanf("%d", &matrix[i][j]);

  maximum = matrix[0][0];

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      if (matrix[i][j] > maximum)
        maximum = matrix[i][j];

  printf("Maximum element in the matrix is %d\n", maximum);

  return 0;
}
