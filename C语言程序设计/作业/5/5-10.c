#include <stdio.h>

int main(void) 
{
    int a;
    scanf("%d", &a); // 从标准输入读取一个整数，赋值给a

    if (a < 60) {
        printf("E\n");
    } else if (a < 70) {
        printf("D\n");
    } else if (a < 80) {
        printf("C\n");
    } else if (a < 90) {
        printf("B\n");
    } else {
        printf("A\n");
    }

    return 0; // 返回0，表示程序正常结束
}
