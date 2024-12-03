#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);

    int triangle[n][n];

    // 初始化杨辉三角
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            if (j == 0 || j == i) 
            {
                triangle[i][j] = 1;
            } 
            else 
            {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    // 打印杨辉三角
    for (int i = 0; i < n; i++) 
    {
        // 打印前导空格
        for (int j = 0; j < n - i - 1; j++) 
        {
            printf("  ");
        }
        // 打印数字
        for (int j = 0; j <= i; j++) 
        {
            printf("%4d", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}