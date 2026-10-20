#include <stdio.h>
int main(){
    int m = 5;
    int n = 6;
    m = n--;    // m = n = 6 -> n = n - 1 = 5
    if(m > n) printf("%d\n",m); // m = 6 n = 5
    else      printf("%d\n",n);
    return 0;
}