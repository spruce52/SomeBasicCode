//题目描述
//求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字，为2。 
//例如，n=5时=2+22+222+2222+22222，n由键盘输入。
#include <stdio.h>

int main(){
    int Sn = 0;
    int a = 2;
    int n; 
    int term = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        term = term * 10 + a;
        Sn = Sn + term;
    }
    printf("%d\n",Sn);
    return 0;
}