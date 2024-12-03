#include <stdio.h>

int main(void) 
{
    int score;
    scanf("%d", &score); // 从标准输入读取一个整数，赋值给score

    switch (score / 10) {
        case 10: 
        case 9: 
            printf("A\n"); 
            break;
        case 8: 
            printf("B\n"); 
            break;
        case 7: 
            printf("C\n"); 
            break;
        case 6: 
            printf("D\n"); 
            break;
        default: 
            printf("E\n");
    }

    return 0; // 返回0，表示程序正常结束
}