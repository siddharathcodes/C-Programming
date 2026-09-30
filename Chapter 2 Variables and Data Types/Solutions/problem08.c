#include <stdio.h>

int main()
{
    int position;
    char letter;

    scanf("%d", &position);

    letter = 'A' + position;

    printf("The %dth upper case letter in the English alphabet is %c.",
           position, letter);

    return 0;
}