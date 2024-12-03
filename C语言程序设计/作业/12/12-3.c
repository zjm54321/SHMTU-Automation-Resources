#include <stdio.h>

// 递归函数声明
double calc_pow(double x, int n);

int main(void) 
{
    double x;
    int n;

    // 读取输入的底数 x 和指数 n
    scanf("%lf %d", &x, &n);

    // 输出 x 的 n 次幂
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}

// 递归计算 x 的 n 次幂
double calc_pow(double x, int n) 
{
    // 基本情况：n 为 1 时，返回 x
    if (n == 1) 
    {
        return x;
    } 
    else 
    {
        // 递归情况：x * x 的 (n-1) 次幂
        return x * calc_pow(x, n - 1);
    }
}