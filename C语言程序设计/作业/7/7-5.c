#include <stdio.h>

int main(void) 
{
    int N;
    double sum = 0.0;

    // 读取用户输入的整数 N
    scanf("%d", &N);

    // 使用 for 循环计算 sum
    for (int i = 0; i < N; i++) {
        sum += (i % 2 == 0 ? 1.0 : -1.0) / (3 * i + 1);
    }

    // 输出结果，保留 3 位小数
    printf("sum = %.3f\n", sum);

    return 0;
}