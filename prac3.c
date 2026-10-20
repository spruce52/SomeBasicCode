// 水仙花数：三位数字 各位数字的立方和等于它本身
// 现在请编写一个函数，判断一个三位整数是否为水仙花数
// 如果是水仙花数，输出Yes
#include <stdio.h>

void flower(int x){
    int a = x / 100;     // 百位数字
    int b = x / 10 % 10; // 十位数字
    int c = x % 10;      // 个位数字
    if (a * a * a + b * b * b + c * c * c == x) printf("Yes\n");
    else printf("No\n");
}
int main (){
    int n = 154;
    flower(n);
    return 0;
}