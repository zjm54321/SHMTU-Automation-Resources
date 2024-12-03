#include <stdio.h>

int main(void) 
{
    int x;
    scanf("%d", &x);

    int digits[4];

    // 将每一位上的数字加9，然后除以10取余
    for (int i = 3; i >= 0; i--) 
    {
        digits[i] = (x % 10 + 9) % 10;
        x /= 10;
    }

    // 交换千位和十位，百位和个位
    int temp = digits[0];
    digits[0] = digits[2];
    digits[2] = temp;

    temp = digits[1];
    digits[1] = digits[3];
    digits[3] = temp;

    // 组成加密后的新四位数
    int encrypted_number = digits[0] * 1000 + digits[1] * 100 + digits[2] * 10 + digits[3];

    // 输出加密后的新数
    printf("The encrypted number is %d\n", encrypted_number);

    return 0;
}