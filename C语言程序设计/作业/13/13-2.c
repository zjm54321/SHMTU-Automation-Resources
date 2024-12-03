#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);

    int numbers[n];
    int sum = 0;

    // 读取 n 个整数
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // 计算平均值
    double average = sum / (double)n;

    // 计算超过或等于平均值的数的个数
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (numbers[i] >= average) 
        {
            count++;
        }
    }

    // 输出平均值和超过平均值的数的个数
    printf("%.2f %d\n", average, count);

    return 0;
}