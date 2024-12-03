#include <stdio.h>

int main(void) 
{
    int a;
    scanf("%d", &a); // 从标准输入读取一个整数，赋值给a

    if (a >= 60) {
        printf("A\n"); // 如果a大于等于60，输出“A”
    } else {
        printf("B\n"); // 如果a小于60，输出“B”
    }

    return 0; // 返回0，表示程序正常结束
}