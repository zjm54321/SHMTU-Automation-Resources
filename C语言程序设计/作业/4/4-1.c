#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b); // 从标准输入读取两个整数，分别赋值给a和b

    int c = a + b; // 计算a和b的和
    int d = a - b; // 计算a和b的差
    int e = a * b; // 计算a和b的积

    printf("%d+%d=%d\n", a, b, c); // 输出a和b的和
    printf("%d-%d=%d\n", a, b, d); // 输出a和b的差
    printf("%d*%d=%d\n", a, b, e); // 输出a和b的积

    if (a % b == 0) { // 检查a是否能被b整除
        printf("%d/%d=%d\n", a, b, a / b); // 如果a能被b整除，输出整数结果
    } else {
        printf("%d/%d=%.2f\n", a, b, (double)a / b); // 如果a不能被b整除，输出浮点数结果
    }

    return 0; // 返回0，表示程序正常结束
}
