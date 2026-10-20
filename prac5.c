// 求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
#include <stdio.h>

int main(){
    long sum = 0;
    long fact = 1;
    int n;         // n为多少，就算到多少的阶乘
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        fact = fact * i;
        sum = sum + fact; 
    }
    printf("1!+2!+3!+...+%d! = %ld\n",n,sum);
    return 0;
}
