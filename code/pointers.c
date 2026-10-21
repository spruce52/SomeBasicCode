#include <stdio.h>

int main(){
    int a = 100;
    int *p = &a;       // 定义了一个指针,指针指向地址！ 这里指向的是a变量的地址
    printf("%d\n",p);  // 输出结果为 1868687340
    printf("%d\n",*p); // 输出结果为100
    // 如何改变a的值?
    a = 200;
    printf("%d\n",p);  // 输出结果为 1868687340
    printf("%d\n",*p); // 输出结果为200
    // a = *p
    *p = 300;
    printf("%d\n",p);  // 输出结果为 1868687340
    printf("%d\n",*p); // 输出结果为300
}