#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main(void) 
{
    int m, n, t;
    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);
    return 0;
}

// 递归计算第 n 项 Fibonacci 数
int fib(int n) 
{
    if (n == 1 || n == 2) 
    {
        return 1;
    } 
    else 
    {
        return fib(n - 1) + fib(n - 2);
    }
}

// 打印区间 [m, n] 内的所有 Fibonacci 数
void PrintFN(int m, int n) 
{
    int a = 1, b = 1, c;
    int found = 0;

    // 生成并检查 Fibonacci 数
    while (a <= n) 
    {
        if (a >= m) 
        {
            if (found) 
            {
                printf(" ");
            }
            printf("%d", a);
            found = 1;
        }
        c = a + b;
        a = b;
        b = c;
    }

    // 如果没有找到任何 Fibonacci 数，输出提示信息
    if (!found) 
    {
        printf("No Fibonacci number");
    }
    printf("\n");
}