//一个数如果恰好等于不包含它本身所有因子之和，这个数就称为"完数"。
// 例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 
// 编程序找出N之内的所有完数

#include <stdio.h>
//这个函数的作用是判断一个数x是否为完数
int IsCom(int x){
    int sum = 0;
    for(int i = 1; i <= x - 1; i++){
        if (x % i == 0){
            sum = sum + i;
        }
    }
    if(sum == x) return 1; //返回值为1 说明为完数
    else return 0;
}
int main(){
    int N;
    scanf("%d",&N);
    for(int i = 1; i <= N; i++){
        if(IsCom(i) == 1) printf("%d\t",i);
    }
    printf("\n");
    return 0;
}   