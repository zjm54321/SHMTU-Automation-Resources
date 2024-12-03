#include <stdio.h>

int main(void) 
{
    long long N;
    scanf("%lld", &N);

    int digit_count = 0;
    int digit_sum = 0;

    // 计算位数及各位数字之和
    while (N > 0) 
    {
        digit_sum += N % 10;
        N /= 10;
        digit_count++;
    }

    printf("%d %d\n", digit_count, digit_sum);

    return 0;
}