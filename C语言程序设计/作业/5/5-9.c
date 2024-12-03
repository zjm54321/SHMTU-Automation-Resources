#include <stdio.h>

int main(void) 
{
    int x;
    scanf("%d", &x); // 从标准输入读取一个整数，赋值给x

    if (x == 0) {
        printf("sign(0) = 0\n"); // 如果x等于0，输出sign(0) = 0
    } else if (x > 0) {
        printf("sign(%d) = 1\n", x); // 如果x大于0，输出sign(x) = 1
    } else {
        printf("sign(%d) = -1\n", x); // 如果x小于0，输出sign(x) = -1
    }

    return 0; // 返回0，表示程序正常结束
}