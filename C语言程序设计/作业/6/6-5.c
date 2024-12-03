#include <stdio.h>

int main(void) 
{
    double salary, tax;
    scanf("%lf", &salary); // 从标准输入读取工资

    if (salary <= 1600) {
        tax = 0; // 工资在1600元以内，不收税
    } else if (salary <= 2500) {
        tax = 0.05 * (salary - 1600); // 工资在1600到2500元之间，税率为5%
    } else if (salary <= 3500) {
        tax = 0.1 * (salary - 1600); // 工资在1600到3500元之间，税率为10%
    } else if (salary <= 4500) {
        tax = 0.15 * (salary - 1600); // 工资在1600到4500元之间，税率为15%
    } else {
        tax = 0.2 * (salary - 1600); // 工资超过4500元，税率为20%
    }

    printf("%.2f\n", tax); // 输出税额，保留两位小数

    return 0; // 返回0，表示程序正常结束
}