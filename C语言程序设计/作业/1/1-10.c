#include <stdio.h>

// 主函数，程序的入口点，返回值为 int 型
int main(void) 
{
    int a = 6, b = 2;
    // 输出两个整数的和、差、积、商
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    return 0; // 返回 0，表示程序正常结束
}