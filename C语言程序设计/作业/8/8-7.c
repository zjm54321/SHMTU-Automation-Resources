#include <stdio.h>

int factorial(int num);

int main(void) 
{
    int n;
    scanf("%d", &n);

    int sum = 0;

    // 计算 1! + 2! + ... + n!
    for (int i = 1; i <= n; i++) 
    {
        sum += factorial(i);
    }

    printf("%d\n", sum);

    return 0;
}

// 计算 num 的阶乘
int factorial(int num) 
{
    int result = 1;
    for (int i = 1; i <= num; i++) 
    {
        result *= i;
    }
    return result;
}