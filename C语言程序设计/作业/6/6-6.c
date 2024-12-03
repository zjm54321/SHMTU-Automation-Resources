#include <stdio.h>

int main(void) 
{
    double price, total;
    int amount, type;
    char service;
    scanf("%d %d %c", &amount, &type, &service); // 从标准输入读取数量、类型和服务类型

    if (type == 92) {
        price = 6.95;
    } else if (type == 95) {
        price = 7.44;
    } else {
        price = 7.93;
    }

    if (service == 'm') {
        total = amount * price * 0.95; // 会员服务打95折
    } else {
        total = amount * price * 0.97; // 非会员服务打97折
    }

    printf("%.2f\n", total); // 输出总费用，保留两位小数

    return 0; // 返回0，表示程序正常结束
}