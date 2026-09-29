#include <stdio.h>

int main() {
    int num;

    printf("Enter the number you want to print: ");
    scanf("%d", &num);

    if (num >= 2 && num <= 9) {
        printf("%d%d%d%d%d%d\n", num, num, num, num, num, num);
        printf("%d    %d\n", num, num);
        printf("%d    %d\n", num, num);
        printf("%d%d%d%d%d%d\n", num, num, num, num, num, num);
    }

    return 0;
}