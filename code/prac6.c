#include<stdio.h>
int main()
{
    int i,t,sum=0;
    for(t = 1, i = 1;i<=10;i++)
    {
        sum+=t;   // sum = sum + t;
        if(i%3==0)
        t=-i;
        else
        t=i;
    }
    printf("sum=%d",sum);
    return 0;
}