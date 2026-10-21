#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr; // 等价于 &arr[0]
    
    printf("使用指针遍历数组：\n");
    for (int i = 0; i < 5; i++) {
        // 考点：*(p + i) 与 p[i] 的等价性
        printf("arr[%d] = %d (地址: %p)\n", i, *(p + i), p + i);
    }
    return 0;
}
