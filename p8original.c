#include<stdio.h>
float input(){
    float n;
    printf("Enter the number: ");
    scanf("%f", &n);
    return n;
}
float my_sqrt(float n){
    float x = n;
    for(int i=0; i<15; i++)
    {
        x = (x+ n/x)/2; //Newton-Raphson formula
    }
   return x;
}
void output(float n, float sqrt_result){
    printf("Square root of %.2f is %.2f\n", n, sqrt_result);
}
int main()
{
    float n, sqrt_result;
    n = input();
    sqrt_result = my_sqrt(n);
    output(n, sqrt_result);

    return 0;
}

