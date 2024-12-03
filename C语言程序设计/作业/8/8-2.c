#include <stdio.h>

// 计算最大公约数的函数
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 计算最小公倍数的函数
int lcm(int a, int b, int gcd) 
{
    return (a * b) / gcd;
}

int main(void) 
{
    int M, N;
    scanf("%d %d", &M, &N);

    int gcd_value = gcd(M, N);
    int lcm_value = lcm(M, N, gcd_value);

    printf("%d %d\n", gcd_value, lcm_value);

    return 0;
}