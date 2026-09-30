#include <stdio.h>

int main()
{
    char upper;
    char lower;
    int position;

    scanf("%c", &upper);

    position = upper - 'A';
    lower = 'a' + position;

    printf("%c", lower);

    return 0;
}