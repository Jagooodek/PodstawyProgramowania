#include <stdio.h>


int main(void) {
    int number = 0;
    char sign[4];
    scanf("%d", &number);
    scanf("%s", sign);
    char exit[4] = "exit";
    int result = number;
    do {
        scanf("%d", &number);
        switch(sign[0]) {
            case '+':
                result += number;
                break;
            case '-':
                result -= number;
                break;
            case '*':
                result *= number;
                break;
            case '/':
                result /= number;
                break;
            default:
                break;
        }
        scanf("%s", sign);
       printf("%d", result);
    } while(sign[0] != 'e');

    printf("%d", result);
}
