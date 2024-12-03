#include <stdio.h>
#include <stdlib.h>

// 比较函数，用于qsort排序
int compare(const void *a, const void *b) 
{
    return (*(int *)b - *(int *)a);
}

int main(void) 
{
    int n;
    scanf("%d", &n);

    int scores[n];

    // 读取n个分数
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &scores[i]);
    }

    // 使用qsort进行排序
    qsort(scores, n, sizeof(int), compare);

    // 输出排序后的分数
    for (int i = 0; i < n; i++) 
    {
        printf("%d", scores[i]);
        if (i < n - 1) 
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}