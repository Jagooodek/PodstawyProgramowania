#include <stdio.h>

int main(void) {
    for(int i = 1; i < 100; i++) {
        if(i % 6 == 0) {
            printf("%d\n", i);
        }
    }
}