#include <stdio.h>

int main() {
    const int a[3] = {1};
    for(int i = 0; i < 3; ++i) {
        printf("%d\n", a[i]);
    }
    return 0;
}
