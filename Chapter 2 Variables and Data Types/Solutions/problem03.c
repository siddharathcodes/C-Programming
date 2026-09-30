#include <stdio.h>

int main(){

    int number;
    char ch;

    printf("Enter the number: ");
    scanf("%d",&number);

    ch = number;

    printf("(int->int %d\n",number);
    printf("(int->char->int) %d",ch);

    return 0;
}
