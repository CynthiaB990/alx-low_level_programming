#include <stdio.h>

/**
 *main - check the code
 *
 *Return: Always 0.
 */

int _strlen(char *s) {
    int len = 0;
    while (*s != '\0') { // Keep incrementing len until the null terminator is reached
        len++;
        s++;
    }
    return len;
}

int main() {
    char str[] = "Hello, world!";
    int len = _strlen(str);
    printf("The length of the string is %d.\n", len);
    return 0;
}
