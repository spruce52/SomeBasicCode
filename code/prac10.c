#include <stdio.h>
#include <string.h>
int main(){
    char s[] = "China";
    s[0] = 'M';
    int len = strlen(s);
    int size = sizeof(s);
    printf("%s\n", s);
    printf("%d %d \n",len, size);
}
// %d 整数； %f 浮点数； %c 单个字符； %s 字符串
// 1. 首先 先定一个一个字符串 s[6] = {'C','h','i','n','a'};
// 2/ s[0] = 'M'
// s[] = "Mhina"