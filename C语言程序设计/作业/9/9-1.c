#include <stdio.h>

int is_perfect(int num);

int main(void) 
{
    int m, n;
    scanf("%d %d", &m, &n);

    int found = 0;

    // 查找 m 到 n 之间的所有完数
    for (int i = m; i <= n; i++) 
    {
        if (is_perfect(i)) 
        {
            found = 1;
            printf("%d = 1", i);
            int sum = 1;
            for (int j = 2; j <= i / 2; j++) 
            {
                if (i % j == 0) 
                {
                    printf(" + %d", j);
                    sum += j;
                }
            }
            printf("\n");
        }
    }

    if (!found) 
    {
        printf("None\n");
    }

    return 0;
}

// 判断一个数是否为完数
int is_perfect(int num) 
{
    int sum = 1;
    for (int i = 2; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            sum += i;
        }
    }
    return sum == num;
}