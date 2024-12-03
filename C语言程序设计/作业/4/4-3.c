#include <stdio.h>

int main(void) 
{
    int start_time, elapsed_minutes;
    scanf("%d %d", &start_time, &elapsed_minutes); // 读取起始时间和流逝的分钟数

    int start_hour = start_time / 100; // 提取起始时间的小时部分
    int start_minute = start_time % 100; // 提取起始时间的分钟部分

    int total_minutes = start_hour * 60 + start_minute + elapsed_minutes; // 计算总分钟数
    int end_hour = total_minutes / 60; // 计算终止时间的小时部分
    int end_minute = total_minutes % 60; // 计算终止时间的分钟部分

    printf("%d\n", end_hour * 100 + end_minute); // 输出终止时间

    return 0; // 返回0，表示程序正常结束
}
