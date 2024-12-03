#include <stdio.h>

int main(void)
{
    int num, sum = 0;

    // 读取用户输入的整数，直到输入非正数为止
    while (scanf("%d", &num) && num > 0) {
        // 如果输入的数是奇数，则累加到 sum
        if (num % 2 != 0) {
            sum += num;
        }
    }

    // 输出奇数的累加和
    printf("%d\n", sum);

    return 0;
}