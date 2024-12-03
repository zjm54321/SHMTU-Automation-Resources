#include <stdio.h>

int main(void) 
{
    double eps, sum = 0.0, term;
    int i = 0;

    // 读取用户输入的 eps
    scanf("%lf", &eps);

    // 使用 do-while 循环计算 sum
    do {
        term = (i % 2 == 0 ? 1.0 : -1.0) / (3 * i + 1);
        sum += term;
        i++;
    } while (term > eps || term < -eps);

    // 输出结果，保留 6 位小数
    printf("sum = %.6f\n", sum);

    return 0;
}