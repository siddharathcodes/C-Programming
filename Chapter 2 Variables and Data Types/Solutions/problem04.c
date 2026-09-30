#include <stdio.h>

int main()
{
    int number;
    unsigned char ch;

    printf("Enter the number: ");
    scanf("%d", &number);

    ch = number;

    printf("(int->int) %d\n", number);
    printf("(int->unsigned char->int) %d", ch);

    return 0;
}