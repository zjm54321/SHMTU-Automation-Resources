#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);

    double scores[n], sum = 0.0, max_score = -1.0, min_score = 101.0;

    // 读取 n 个评委的打分
    for (int i = 0; i < n; i++) 
    {
        scanf("%lf", &scores[i]);
        sum += scores[i];
        if (scores[i] > max_score) max_score = scores[i];
        if (scores[i] < min_score) min_score = scores[i];
    }

    // 去掉一个最高分和一个最低分
    sum = sum - max_score - min_score;

    // 输出平均分，保留两位小数
    printf("%.2f\n", sum / (n - 2));

    return 0;
}