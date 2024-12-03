#include <stdio.h>

int main(void) 
{
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // 读取矩阵元素
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 计算并输出每行元素之和
    for (int i = 0; i < m; i++) 
    {
        int sum = 0;
        for (int j = 0; j < n; j++) 
        {
            sum += matrix[i][j];
        }
        printf("%d\n", sum);
    }

    return 0;
}