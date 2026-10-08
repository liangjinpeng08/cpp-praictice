#include <stdio.h>
int main() {
    int score;
    printf("输入成绩：");
    scanf("%d", &score);
    if (score >= 90) {
        printf("优秀\n");
    } else if (score >= 60) {
        printf("及格\n");
    } else {
        printf("不及格\n");
    }
    return 0;
}

