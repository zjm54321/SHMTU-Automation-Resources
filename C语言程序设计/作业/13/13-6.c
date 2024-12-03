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

    // 逆序输出数组中的元素
    for (int i = n - 1; i >= 0; i--) 
    {
        printf("%d", numbers[i]);
        if (i > 0) 
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}