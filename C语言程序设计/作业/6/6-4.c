#include <stdio.h>
#include <math.h>

int main(void) 
{
    double distance; 
    int waitingtime; 
    double fare;
    scanf("%lf %d", &distance, &waitingtime); // 从标准输入读取距离和等待时间

    if (distance <= 3) {
        fare = 10; // 3公里以内的费用
    } else if (distance <= 13) {
        fare = 10 + 2 * (distance - 3); // 3到13公里的费用
    } else {
        fare = 10 + 2 * 10 + 3 * (distance - 13); // 超过13公里的费用
    }

    double total_fare = fare + (waitingtime / 5) * 2; // 计算总费用，包括等待时间的费用
    printf("%.0f\n", round(total_fare)); // 输出总费用，四舍五入取整

    return 0; // 返回0，表示程序正常结束
}