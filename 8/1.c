#include <stdio.h>

int main(void) {
    const int a = 1;
    int * const b = (int*)&a;
    *b = 5;
    printf("%d", a);

    int *wsk = (int*)0x104;

    int**wsk2;

    **wsk2 = 44;

}


