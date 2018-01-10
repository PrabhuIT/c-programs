#include <stdio.h>
 
int main()
{
  int a[100], max, size, c, l = 1;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
 
  for (c = 0; c < size; c++)
    scanf("%d", &a[c]);
 
  max = a[0];
 
  for (c = 1; c < size; c++)
  {
    if (a[c] > max)
    {
       max  = a[c];
       l = c+1;
    }
  }
 
  printf("Maximum element is present at location %d and it's value is %d.\n", location, max);
  return 0;
}
