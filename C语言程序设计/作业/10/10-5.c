#include <stdio.h>

double fact(int n);

int main(void) 
{
    int i;
    double sum = 0;

    for (i = 1; i <= 10; i++) 
    {
        sum += fact(i);
    }

    printf("1!+2!+...+10! = %f\n", sum);
    return 0;
}

// 计算 n 的阶乘
double fact(int n) 
{
    double result = 1;
    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}