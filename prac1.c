// 最大公约数和最小公倍数

#include <stdio.h>

// 辗转相除法
int gcd(int a, int b) {
    while (b != 0) {
    int t;
    t = a % b;
    a = b;
    b = t;
}
    return a;
}
// x 和 y 的最小公倍数 = x * y / gcd(x,y)
int main() {
    int x = 15;
    int y = 25;
    int max = gcd(x, y);
    int min = x * y / max;
    printf("最大公约数为%d，最小公倍数为%d\n", max, min);
    return 0;
}
