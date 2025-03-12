#include <stdio.h>

int main()
{
char x;
printf ("Enter a lowercase letter: ");
scanf ("%c", &x);
x = x - 32;
printf ("Uppercase: %c", x);

return 0;
}

