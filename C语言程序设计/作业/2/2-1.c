#include <stdio.h>

// 主函数，程序的入口点，返回值为 int 型
int main(void) 
{
    int C = 27; // 摄氏温度
    // 计算华氏温度并输出
    printf("celsius=%d, fahr=%d\n", C, C * 9 / 5 + 32);
    return 0; // 返回 0，表示程序正常结束
}