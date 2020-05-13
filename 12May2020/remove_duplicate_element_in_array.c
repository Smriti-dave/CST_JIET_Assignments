#include <stdio.h>
int main()
{
  int n, a[100], b[100], count = 0, i, j;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if(a[i] == a[j])
      a[j] = -99;
        break;
    }
   /* if (j == count) 
    {
      b[count] = a[i];
      count++;
    }*/
  }

  printf("Array obtained after removing duplicate elements:\n");

  for (i = 0; i < count; i++)
    printf("%d\n", b[i]);

  return 0;
}
