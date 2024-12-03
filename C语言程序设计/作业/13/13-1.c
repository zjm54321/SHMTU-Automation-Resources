#include <stdio.h>

int main(void) 
{
    int numbers[10];
    int sum = 0;

    // 读取10个整数
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // 计算平均值
    double average = sum / 10.0;

    // 输出平均值，保留2位小数
    printf("%.2f\n", average);

    return 0;
}