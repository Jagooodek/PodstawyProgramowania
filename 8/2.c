#include <stdio.h>

void swapText(char *tab1, char *tab2, int n) {
    for(int i = 0; i < n; ++i) {
        char tmp = *tab1;
        *tab1 = *tab2;
        *tab2 = tmp;
        *tab1++;
        *tab2++;
    }

    return;
}

int main(void) {
    char tab1[] = "123456789";
    char tab2[] = "987654321";
    swapText(&tab1, &tab2, 10);
    printf("%s %s", tab1, tab2);
}
