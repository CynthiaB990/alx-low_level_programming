#include <stdio.h>

/**
 *set_string - Sets the value of a pointer to a char
 *
 *@s: Pointer to pointer to a char
 *@to: Pointer to a char
 */
void set_string(char **s, char *to)
{
char *s0 = "Brigid Mulongo";
char *s1 = "Kellybrown Mureka";

printf("%s, %s\n", s0, s1);
set_string(&s1, s0);
printf("%s, %s\n", s0, s1);

return (0);
}
