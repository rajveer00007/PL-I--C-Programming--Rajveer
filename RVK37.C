/*
Program (37) ->

Write a program to accept two strings and perform operations using inbuilt functions

1) Copy one string into another

2) Reversing the string

3) Length of the string

4) Compare two strings

5) Concatenates one string to another

Solution: Using any built-in string functions 
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copyStr[100];
    int len, cmpResult;

    // Accept two strings from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // 1) Copy one string into another using strcpy()
    strcpy(copyStr, str1);
    printf("\n1) Copied first string: %s", copyStr);

    // 2) Reverse the string using strrev()
    // Note: strrev() works on standard Windows compilers (like Turbo C, Dev-C++, MinGW)
    strrev(copyStr);
    printf("\n2) Reversed first string: %s", copyStr);

    // 3) Length of the string using strlen()
    len = strlen(str1);
    printf("\n3) Length of first string: %d", len);

    // 4) Compare two strings using strcmp()
    cmpResult = strcmp(str1, str2);
    if (cmpResult == 0) {
        printf("\n4) Comparison: Both strings are equal.");
    } else {
        printf("\n4) Comparison: Strings are not equal.");
    }

    // 5) Concatenate one string to another using strcat()
    strcat(str1, str2);
    printf("\n5) Concatenated string: %s\n", str1);

    return 0;
}
