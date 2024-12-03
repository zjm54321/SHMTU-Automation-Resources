#include <stdio.h>

int main(void) 
{
    int n;
    double sum = 0.0;

    // 读取用户输入的整数 n
    scanf("%d", &n);

    // 使用 for 循环计算 sum
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i - 1);
    }

    // 输出结果，保留 6 位小数
    printf("sum=%.6lf\n", sum);

    return 0;
}