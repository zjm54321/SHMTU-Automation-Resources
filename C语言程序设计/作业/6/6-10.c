#include <stdio.h>

int main(void) 
{
    int year, month, day, days = 0;
    int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    scanf("%d/%d/%d", &year, &month, &day); // 从标准输入读取年、月、日

    // 判断是否为闰年，如果是，则2月有29天
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        months[1] = 29;
    }

    // 计算从年初到上个月末的天数
    for (int i = 0; i < month - 1; i++) {
        days += months[i];
    }

    // 加上本月的天数
    days += day;

    printf("%d\n", days); // 输出结果

    return 0; // 返回0，表示程序正常结束
}