#include <stdio.h>
int print_triangle(int n, int r,int c)
{
     if (r == c && n == 0)
     {
          printf("\n");
          return 0;
     }
     else
     {
          if (n == 0)
          {
               printf("\n");
               r = r + 1;
               n = r;
          }
          if (n != 0)
          {
               printf("* ");
               print_triangle(n - 1, r,c);
          }
     }
}
int print_invertedTriangle(int n,int r)
{
     if (r == 0 && n == 0)
     {
          return 0;
     }
     else
     {
          if (n == 0)
          {
               printf("\n");
               r = r - 1;
               n = r;
          }
          if (n != 0)
          {
               printf("* ");
               print_invertedTriangle(n - 1, r);
          }
     }
}
int main()
{
     int n, c, r;
     printf("Enter number till the sequence will print:");
     scanf("%d", &n);
     r = n;
     printf("Enter choice whether to print triangle form or inverted triangle form:\n");
     printf("Enter '1' to print triangle and '2' to print inverted triangle: ");
     scanf("%d", &c);
     if (c == 1)
     {
          print_triangle(1, 1,n);
     }
     if (c == 2)
     {
          print_invertedTriangle(n,r);
     }

     return 0;
}  