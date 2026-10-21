// 字符串大小与长度
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Liaoning";
    printf("%lu, %lu", sizeof(str), strlen(str));
    return 0;
}
// int 4 字节; char 1 字节
// 字符串： 要以\0结尾
//sizeof()求 大小
//strlen() 求长度     是string.h里的一个函数