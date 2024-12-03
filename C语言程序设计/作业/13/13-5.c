#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);

    int scores[n];
    int sum = 0;
    int max_score = 0;
    int min_score = 100;

    // 读取 n 个学生的成绩
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &scores[i]);
        sum += scores[i];
        if (scores[i] > max_score) 
        {
            max_score = scores[i];
        }
        if (scores[i] < min_score) 
        {
            min_score = scores[i];
        }
    }

    // 计算平均成绩
    double average = sum / (double)n;

    // 输出平均成绩、最高成绩和最低成绩
    printf("average = %.2f max = %.0f min = %.0f\n", average, (double)max_score, (double)min_score);

    return 0;
}