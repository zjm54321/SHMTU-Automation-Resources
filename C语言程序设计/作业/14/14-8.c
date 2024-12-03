#include <stdio.h>

void selection_sort(int arr[], int n);

int main(void) 
{
    int n;
    scanf("%d", &n);

    int arr[n];

    // 读取 n 个整数
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // 选择排序
    selection_sort(arr, n);

    // 输出排序后的数组
    for (int i = 0; i < n; i++) 
    {
        printf("%d", arr[i]);
        if (i < n - 1) 
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

void selection_sort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] > arr[max_idx]) 
            {
                max_idx = j;
            }
        }
        // 交换最大值到当前位置
        int temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}