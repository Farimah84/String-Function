#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); // Meaning that read input string until newline character

    while (str[length] != '\0') // \0 is null
    {
        length++;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}
