#include<stdio.h>
int input()
{
    int a;
    printf ("enter the number : ");
    scanf ("%d",&a);
    return a;
}
int comp()
{
    int x,y,z;
    x=input();
    y=input();
    z=input();
    if (x>y && x>z)
    {
        return x;
    }
    else if(y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int output()
{
    int large;
    large=comp();
    printf ("the largest among the three numbers is %d ",large);
}
int main()
{
    output();
}