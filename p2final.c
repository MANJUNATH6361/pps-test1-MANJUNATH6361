#include<stdio.h>
int input()
{
    int a;
    printf ("please enter the number : ");
    scanf ("%d",&a);
    return a;
}
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int output(int a,int b)
{
    int sum1;
    sum1=add(a,b);
    printf ("the sum of two numbers is %d",sum1);

}
int main()
{
    int x,y,add1;
    x = input();
    y = input();
    add1=output(x,y);
}