#include <stdio.h>
#include <math.h>

int is_prime(int num);

int main(void) 
{
    int m;
    scanf("%d", &m);

    int count = 0;

    // 从 m-1 开始向下查找素数，直到找到 10 个
    for (int i = m - 1; i > 1 && count < 10; i--) 
    {
        if (is_prime(i)) 
        {
            printf("%6d", i);
            count++;
        }
    }
    printf("\n");

    return 0;
}

// 判断一个数是否为素数
int is_prime(int num) 
{
    if (num < 2) 
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}