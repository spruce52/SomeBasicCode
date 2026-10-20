// 闰年 填空
//公元年份可以被 4 整除（例如 2024 年）。
//若為整百年（如 1900 年、2000 年），必須能夠被 400 整除才是閏年（因此 1900 年是平年，2000 年是閏年）。
#include<stdio.h>
int main()
{
    int y,f;
    scanf("%d",&y);
    if(y%400==0)
    f=1;                 // f = 1 是 闰年·
    else if(y % 100 != 0 && y % 4 ==0)
    f=1;
    else
    f = 0;
    if(f)
    printf("%d is ",y);
    else printf("%d is not ",y);
    printf("a leap year\n");
    return 0;
}