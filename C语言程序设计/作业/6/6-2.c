#include <stdio.h>
#include <math.h>

int main(void) 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); // 从标准输入读取三个整数，分别赋值给a、b和c

    if (a + b > c && a + c > b && b + c > a) { // 判断是否能构成三角形
        float perimeter = a + b + c; // 计算周长
        float z = (a + b + c) / 2.0; // 计算半周长
        float s = z * (z - a) * (z - b) * (z - c); // 计算海伦公式中的s
        float area = sqrt(s); // 计算面积
        printf("area=%.2f;perimeter=%.2f\n", area, perimeter); // 输出面积和周长
    } else {
        printf("These sides do not correspond to a valid triangle\n"); // 输出不是有效三角形的提示
    }

    return 0; // 返回0，表示程序正常结束
}