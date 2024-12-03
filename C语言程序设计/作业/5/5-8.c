#include <stdio.h>

int main(void) 
{
    int a;
    scanf("%d", &a); // 从标准输入读取一个整数，赋值给a

    if (a > 60) {
        printf("Speed: %d - Speeding\n", a); // 如果a大于60，输出“Speeding”
    } else {
        printf("Speed: %d - OK\n", a); // 如果a小于等于60，输出“OK”
    }

    return 0; // 返回0，表示程序正常结束
}