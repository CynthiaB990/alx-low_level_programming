#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int counter = 0;
srand(time(NULL));
char randchar;

int  passwordLength;

printf("Type in a password Length \n");
scanf("%d", &passwordLength);

while(counter < passwordLength)
{
//seed random based on time
srand(time(NULL));
randchar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
printf("%c", randChar);
counter++;
}
return 0;
}
