#include <stdio.h>

int main(void) 
{
    int F;  // 定义整型变量F，用于存储华氏温度
    scanf("%d", &F);  // 从标准输入读取一个整数，赋值给F
    printf("Celsius=%d\n", 5 * (F - 32) / 9);  // 计算摄氏温度并输出
    return 0;  // 返回0，表示程序正常结束
}
