#include <stdio.h>
int input()
{
    int a;
    scanf("%d", &a);
    return a;
}
int cmp(int a, int b, int c)
{
   int max;
     if (a>b && a>c)
     max = a;
     else if( b>c)
     max = b; 
     else 
       max = c;
   return max;
}
void output(int max)
{
    printf("Maximum number is %d\n", max);
} 
int main()
{
  int a,b,c,max;
  printf("Enter num 1: ");
  a = input();
  printf("Enter num 2: ");
  b = input();
  printf("Enter num 3: ");
  c = input();
  max = cmp(a,b,c);
  output(max);

  return 0;
}

