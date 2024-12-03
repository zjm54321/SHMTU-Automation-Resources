#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    int sum = 0;

    // 读取矩阵元素
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 计算除副对角线、最后一列和最后一行以外的所有元素之和
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1; j++) 
        {
            if (i + j != n - 1) 
            {
                sum += matrix[i][j];
            }
        }
    }

    // 输出结果
    printf("%d\n", sum);

    return 0;
}