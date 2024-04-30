#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    //Print the result
    if (isSubstring(str1, str2)) {
        printf("Second string is present in the first string.\n");
    } else {
        printf("Second string is NOT present in the first string.\n");
    }

    return 0;
}

int isSubstring(const char *str1, const char *str2)
{
    while (*str1 != '\0')
    {
        const char *p1 = str1;
        const char *p2 = str2;

        //To check the existence of the second string in the first one
        while (*p1 == *p2 && *p2 != '\0')
        {
            p1++;
            p2++;
        }

        // If the second string is found in the first string
        if (*p2 == '\0')
            return 1;

        str1++;
    }

    return 0;
}
