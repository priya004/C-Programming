#include <stdio.h>
int main()
{
    char p;
    printf("Enter a character: ");
    scanf("%c",&p);
    if( (p >= 'a' && p <= 'z') || (p >= 'A' && p <= 'Z'))
        printf("Alphabet");
    else
        printf("Not an alphabet");
    return 0;
}
