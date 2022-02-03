#include <stdio.h>
  int input()
 {
   int a;
   scanf("%d", &a);
   return a;
 }
 int add(int a, int b)
 {
   return a + b;
 }
void output (int a, int b, int sum)
{
  printf(" %d + %d = %d\n", a, b, sum);
}
int main()
 {
   int a,b,sum;
   printf("Enter num 1: ");
   a = input();
   printf("Enter num 2: ");
   b = input();
   sum = add( a, b);
   output(a, b, sum);
   return 0;
 }

