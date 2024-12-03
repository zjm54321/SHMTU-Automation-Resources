#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);

    int numbers[n];
    int differences[n - 1];

    // 读取 n 个整数
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    // 计算后项减前项之差
    for (int i = 1; i < n; i++) 
    {
        differences[i - 1] = numbers[i] - numbers[i - 1];
    }

    // 按每行三个元素的格式输出结果
    for (int i = 0; i < n - 1; i++) 
    {
        printf("%d", differences[i]);
        if ((i + 1) % 3 == 0 || i == n - 2) printf("\n");
        else printf(" ");
    }

    return 0;
}