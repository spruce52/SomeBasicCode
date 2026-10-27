#include <stdio.h>

// 使用指针交换两个数的位置

void swap(int* x, int* y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main(){
    int a = 10, b = 20;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}