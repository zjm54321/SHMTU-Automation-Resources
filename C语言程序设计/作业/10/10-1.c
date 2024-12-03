#include <stdio.h>

int sum(int m, int n);

int main(void) 
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));
    return 0;
}

// 计算 m 到 n 之间所有整数的和
int sum(int m, int n) 
{
    int total = 0;
    for (int i = m; i <= n; i++) 
    {
        total += i; // 累加当前整数到总和
    }
    return total;
}