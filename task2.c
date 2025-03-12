#include <stdio.h>

int main()
{
char x;
printf ("Enter an uppercase letter: ");
scanf ("%c", &x);
x = x + 32;
printf (" Lowercase: %c", x);

return 0;
}

