#include <stdio.h>

int main() {
    int a = 0;
    printf("%s", "Ile masz wzrostu w centymetrach?\n");
    scanf("%d", &a);
    if(a >= 180) {
        printf("%s", "Jesteś hardcorem!");
    }
    else {
        printf("%s", "Nie jesteś hardcorem!");
    }

}
