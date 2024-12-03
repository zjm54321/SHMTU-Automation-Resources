#include <stdio.h>

int main(void) 
{
    int n;
    double sum = 0.0;
    scanf("%d", &n); // 从标准输入读取整数n

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i; // 累加1/i
    }

    printf("sum=%.6lf\n", sum); // 输出结果，保留六位小数
    return 0; // 返回0，表示程序正常结束
}