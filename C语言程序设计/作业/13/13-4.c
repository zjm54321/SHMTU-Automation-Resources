#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);

    int numbers[n];

    // 读取 n 个整数
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    // 找出最小值及其下标
    int min_index = 0;
    for (int i = 1; i < n; i++) 
    {
        if (numbers[i] < numbers[min_index]) 
        {
            min_index = i;
        }
    }

    // 将最小值与第一个数交换
    int temp = numbers[0];
    numbers[0] = numbers[min_index];
    numbers[min_index] = temp;

    // 找出最大值及其下标
    int max_index = 0;
    for (int i = 1; i < n; i++) 
    {
        if (numbers[i] > numbers[max_index]) 
        {
            max_index = i;
        }
    }

    // 将最大值与最后一个数交换
    temp = numbers[n - 1];
    numbers[n - 1] = numbers[max_index];
    numbers[max_index] = temp;

    // 输出交换后的序列
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}