// 求5个学生平均分，查找最高分 显示结果
//79 93 83 88 91

#include <stdio.h>

int main(){
    int score[5] = {79,93,83,88,91};
    float sum = 0;
    float avg = 0;
    int max = score[0];
    for(int i = 0; i <= 4; i++){
        sum = sum + score[i];
    }
    avg = sum / 5;
    for(int i = 0; i <= 4; i++){
        if (score[i] > max) max = score[i];
    }
    printf("平均分为：%.2f 最高分为%d\n",avg,max);
    return 0;
    
}