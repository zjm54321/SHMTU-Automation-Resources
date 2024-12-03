#include <stdio.h>

int main(void) 
{
    int a, b;
    char op;
    scanf("%d%c%d=", &a, &op, &b); // 从标准输入读取两个整数和一个操作符

    switch (op) {
        case '+':
            printf("%d\n", a + b); // 如果操作符是+，输出a + b
            break;
        case '-':
            printf("%d\n", a - b); // 如果操作符是-，输出a - b
            break;
        case '*':
            printf("%d\n", a * b); // 如果操作符是*，输出a * b
            break;
        case '/':
            if (b != 0) {
                printf("%d\n", a / b); // 如果操作符是/且b不为0，输出a / b
            } else {
                printf("ERROR\n"); // 如果b为0，输出错误信息
            }
            break;
        default:
            printf("ERROR\n"); // 如果操作符不是上述四种，输出错误信息
            break;
    }

    return 0; // 返回0，表示程序正常结束
}