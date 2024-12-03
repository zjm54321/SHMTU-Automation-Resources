#include <stdio.h>

double mypow(double x, int n);

int main(void) 
{
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));
    return 0;
}

// 计算 x 的 n 次方
double mypow(double x, int n) 
{
    double result = 1.0;
    for (int i = 0; i < n; i++) 
    {
        result *= x;
    }
    return result;
}