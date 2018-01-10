#include <stdio.h>
#include <math.h>
 
int main()
{
     int p, q, n, i, tn;
     int sum = 0;
 
     printf("Enter the first term value of the A.P. series: ");
     scanf("%d", &p);
     printf("Enter the total numbers in the A.P. series: ");
     scanf("%d", &n);
     printf("Enter the common difference of A.P. series: ");
     scanf("%d", &q);
     sum = (n * (2 * p + (n - 1)* q ))/ 2;
     tn = a + (n - 1) * q;
     printf("Sum of the A.P series is: ");
     for (i = p; i <= tn; i = i + q )
     {
          if (i != tn)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
