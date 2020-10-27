#include <stdio.h>

int main(void) {
    int x, y;
    scanf("%d %d",&x, &y);
    int tab[x][y];

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            scanf("%d", &tab[i][j]);
        }
    }

    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
            printf("%d ", tab[j][i]);
        }
        printf("\n");
    }

}
