#include <stdio.h>

int main()
{
    char digit;
    int number;

    scanf("%c", &digit);

    number = digit - '0';

    printf("(%%c) %c\n", digit);
    printf("(%%d) %d", number);

    return 0;
}