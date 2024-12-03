#include <stdio.h>

int main(void) 
{
    int n, X;
    scanf("%d %d", &n, &X);

    int numbers[n];
    int found = 0;

    // 读取 n 个整数
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    // 查找 X 的位置
    for (int i = 0; i < n; i++) 
    {
        if (numbers[i] == X) 
        {
            printf("%d\n", i);
            found = 1;
            break;
        }
    }

    // 如果没有找到，输出 "Not Found"
    if (!found) 
    {
        printf("Not Found\n");
    }

    return 0;
}