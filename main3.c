#include <stdio.h>
#include <stdlib.h>

//Farimah Nourpanah, Sunday class 18 p.m
//C book Homework, chapter 6, number 3

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string from input

    n(str); // Remove blanks and digits

    printf("Resulting string after removing blanks and digits: %s\n", str);

    return 0;
}

void n(char *str) {
    char *p = str; // Pointer to iterate through the string
    char *q = str; // For the non-blank, non-digit characters

    while (*p) {
        if (!((*p >= '0' && *p <= '9') || *p == ' ')) {
            *q = *p; // Copy non-blank, non-digit characters
            q++;
        }
        p++;
    }
    *q = '\0'; // result
}

