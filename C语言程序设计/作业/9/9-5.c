#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);

    int mid = n / 2;

    // 打印上半部分
    for (int i = 0; i <= mid; i++) 
    {
        // 打印前导空格
        for (int j = 0; j < mid - i; j++) 
        {
            printf("  ");
        }
        // 打印星号
        for (int j = 0; j < 2 * i + 1; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }

    // 打印下半部分
    for (int i = mid - 1; i >= 0; i--) 
    {
        // 打印前导空格
        for (int j = 0; j < mid - i; j++) 
        {
            printf("  ");
        }
        // 打印星号
        for (int j = 0; j < 2 * i + 1; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}