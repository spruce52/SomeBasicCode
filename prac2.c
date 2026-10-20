//写一个判断素数的函数，在主函数输入一个整数，输出是否是素数的消息。
//在主函数中输入一个整数如果是素数输出prime  如果不是素数输出NotPrime
#include <stdio.h>

void Isprime(int x){
    int flag = 1;       // flag = 1 是素数
    for (int i = 2; i <= x - 1; i ++){
        if (x % i == 0) flag = 0;
    }
    if (flag == 1) printf("Prime\n");
    else           printf("NotPrime\n");
}

int main(){
    int n = 8;
    Isprime(n);
    return 0;
}