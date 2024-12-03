#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    // 读取矩阵元素
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int found = 0;

    // 查找鞍点
    for (int i = 0; i < n; i++) 
    {
        int max_in_row = matrix[i][0];
        int col_index = 0;

        // 找到该行的最大值及其列下标
        for (int j = 1; j < n; j++) 
        {
            if (matrix[i][j] > max_in_row) 
            {
                max_in_row = matrix[i][j];
                col_index = j;
            }
        }

        // 检查该列是否为最小值
        int is_saddle_point = 1;
        for (int k = 0; k < n; k++) 
        {
            if (matrix[k][col_index] < max_in_row) 
            {
                is_saddle_point = 0;
                break;
            }
        }

        if (is_saddle_point) 
        {
            printf("%d %d\n", i, col_index);
            found = 1;
            break;
        }
    }

    if (!found) 
    {
        printf("NONE\n");
    }

    return 0;
}