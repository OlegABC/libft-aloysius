#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int counter;

    counter = 0;
    if (!s || !f)
        return;
    while (*s)
    {
        f(counter, s);
        s++;
        counter++;
    }
}