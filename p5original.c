#include<stdio.h>
int input(int *a,int *b,int *c)
{
    printf ("please enter the three numbers : ");
    scanf ("%d %d %d",a,b,c);
}
int comp(int a,int b,int c,int *large)
{
    {
        if (a>b)
        {
            if (a>c)
            {
                *large=a;
            }
        }
        else if (b>c)
        {
            *large= b;
        }
        else
        {
            *large=c;
        }
        printf ("the greatest among the three numbers is %d",*large);
    }
}

int main()
{
    int a,b,c,large;
    input (&a,&b,&c);
    comp(a,b,c,&large);
}