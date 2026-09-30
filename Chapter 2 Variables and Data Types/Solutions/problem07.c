#include <stdio.h>

int main()
{
    char letter;
    int position;

    scanf("%c", &letter);

    position = letter - 'a';

    printf("%c is the %dth lower case letter in the English alphabet.",
           letter, position);

    return 0;
}