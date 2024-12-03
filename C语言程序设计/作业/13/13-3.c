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

    // 找出最大值及其最小下标
    int max_value = numbers[0];
    int max_index = 0;
    for (int i = 1; i < n; i++) 
    {
        if (numbers[i] > max_value) 
        {
            max_value = numbers[i];
            max_index = i;
        }
    }

    // 输出最大值及其最小下标
    printf("%d %d\n", max_value, max_index);

    return 0;
}