#include <stdio.h>

int main(void) 
{
    int D; // 定义整型变量D，用于存储输入的天数
    scanf("%d", &D); // 从标准输入读取一个整数，赋值给D
    int aftertomorrow = (D + 2) % 7; // 计算后天的天数，并取模7以确保结果在0到6之间
    printf("%d\n", aftertomorrow); // 输出计算结果
    return 0; // 返回0，表示程序正常结束
}
