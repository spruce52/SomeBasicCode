// 判断是否为闰年
#include <stdio.h>

void IsLeap(int x){
    if (x % 400 == 0) printf("%d是闰年\n",x);
    else if (x % 100 != 0 && x % 4 == 0) printf("%d是闰年\n",x);
    else printf("%d不是闰年\n",x);
}

int main(){
    int year;
    printf("请输入你想判断的年份:\n");
    scanf("%d",&year);
    IsLeap(year);
    return 0;
}


// https://github.com/spruce52/SomeBasicCode