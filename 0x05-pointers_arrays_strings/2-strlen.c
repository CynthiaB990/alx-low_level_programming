#include <stdio.h>

/**
 *main - check the code
 *
 *Return: Always 0.
 */

int _strlen(char *s) {
    int count = 0;
    while (*s != '\0') { // Loop until we reach the null character
        count++;
        s++;
    }
    return count;
}

int main() {
    char str[] = "Hello, world!";
    int len = _strlen(str);
    printf("The length of '%s' is %d\n", str, len);
    return 0;
}

