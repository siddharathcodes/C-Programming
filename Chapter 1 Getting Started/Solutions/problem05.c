#include <stdio.h>

int main() {
    int month, day;

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter day: ");
    scanf("%d", &day);

    printf("My birthday is month %d date %d.\n", month, day);

    return 0;
}