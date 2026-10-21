#include <stdio.h>

int main(){
    int i;
    for(i = 1; i < 5; i++){
        switch (i%4) {
            case 1: printf("1");
            case 2: printf("2"); break;
            case 3: printf("3");
            case 4: printf("4"); break;
            default: printf("0"); break;
            // i = 1     12
            // i = 2     2
            // i = 3 i % 4 = 3 case3 ->34
            // i = 4  0
        
        }
    }
}