#include <stdio.h>

int main() {

    char tab[10];
    scanf("%s", tab);
    if(tab[0] == 'p' || tab[0] == 'P') {
        printf("%s", "tak");
    }
    else {
        printf("%s", "nie");
    }


}
