#include <stdio.h>

double factorial(int num);

int main(void) 
{
    int n;
    scanf("%d", &n);

    double e = 1.0;

    // 计算级数的前 n+1 项和
    for (int i = 1; i <= n; i++) 
    {
        e += 1.0 / factorial(i);
    }

    printf("%.8f\n", e);

    return 0;
}

// 计算 num 的阶乘
double factorial(int num) 
{
    double result = 1.0;
    for (int i = 1; i <= num; i++) 
    {
        result *= i;
    }
    return result;
}