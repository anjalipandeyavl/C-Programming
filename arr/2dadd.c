#include <stdio.h>
void main()
{
  int i, j, r, c, arr1[20][20], arr2[20][20], arr3[30][30];
  printf("enter no of row and column : ");
  scanf("%d%d", &r, &c);
  printf("enter first element : ");
  printf("enter first element : ");
  printf("enter first element : ");
  printf("enter first element : ");
  printf("enter first element : ");

  printf("enter first element : ");
  printf("enter first element : ");
  printf("enter first element : ");
  printf("enter first element : ");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }
  printf("enter second element : ");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      scanf("%d", &arr2[i][j]);
    }
  }
  printf("enter first array element : \n");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      printf("%d\t", arr1[i][j]);
    }
    printf("\n");
  }
  printf("enter second array element : \n");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      printf("%d\t", arr2[i][j]);
    }
    printf("\n");
  }
  printf("resultant array element are :\n");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      arr3[i][j] = arr1[i][j] + arr2[i][j];
      printf("%d\t", arr3[i][j]);
    }
    printf("\n");
  }
}
