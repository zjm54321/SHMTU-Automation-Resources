#include <stdio.h>
#include <math.h>

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

int main(void) 
{
    int n, m;
    scanf("%d %d", &n, &m);

    int count = 0, sum = 0, current_prime = 2;

    for (int i = 2; count < m; i++) 
    {
        if (is_prime(i)) 
        {
            count++;
            if (count >= n) 
            {
                sum += i;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}