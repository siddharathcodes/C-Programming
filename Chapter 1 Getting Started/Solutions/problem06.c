#include <stdio.h>

int main() {
    int month, day;

    printf("Enter month and day: ");
    scanf("%d %d", &month, &day);

    printf("My birthday is month %d date %d.\n", month, day);

    return 0;
}