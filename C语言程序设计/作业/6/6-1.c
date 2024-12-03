#include <stdio.h>

int main(void) 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); // 从标准输入读取三个整数，分别赋值给a、b和c

    // 通过交换排序三个数，使a <= b <= c
    if (a > b) { int temp = a; a = b; b = temp; }
    if (a > c) { int temp = a; a = c; c = temp; }
    if (b > c) { int temp = b; b = c; c = temp; }

    printf("%d->%d->%d\n", a, b, c); // 输出排序后的结果

    return 0; // 返回0，表示程序正常结束
}
