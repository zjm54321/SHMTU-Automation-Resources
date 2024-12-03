#include <stdio.h>

int main(void) 
{
    int a;
    scanf("%d", &a); // 从标准输入读取一个整数，赋值给a

    if (a < 0) {
        printf("Invalid Value!\n"); // 如果a小于0，输出“Invalid Value!”
    } else {
        float cost;
        if (a <= 50) {
            cost = a * 0.53; // 计算50度以内的费用
        } else {
            cost = 50 * 0.53 + (a - 50) * 0.58; // 计算超过50度的费用
        }
        printf("cost=%.2f\n", cost); // 输出费用，保留两位小数
    }

    return 0; // 返回0，表示程序正常结束
}
