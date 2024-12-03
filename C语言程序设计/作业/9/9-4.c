#include <stdio.h>

int main(void) 
{
    int a, n;
    scanf("%d %d", &a, &n);

    int sum = 0, term = 0;

    // 计算 a + aa + aaa + ... + aa...a (n 个 a) 的和
    for (int i = 0; i < n; i++) 
    {
        term = term * 10 + a; // 生成当前项
        sum += term; // 累加到总和
    }

    // 输出结果
    printf("s = %d\n", sum);

    return 0;
}