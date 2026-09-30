#include <stdio.h>

int main()
{
    char lower;
    char upper;
    int position;

    scanf("%c", &lower);

    position = lower - 'a';
    upper = 'A' + position;

    printf("%c", upper);

    return 0;
}