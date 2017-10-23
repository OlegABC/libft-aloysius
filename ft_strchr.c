#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int counter;

    counter = 0;
    while (*(s + counter) != '\0')
    {
        if (*(s + counter) == (unsigned char)c)
            return (char *)(s + counter);
        counter++;
    }
    if ((unsigned char)c == '\0' && *(s + counter) == '\0')
        return (char *)(s + counter);
    return (0);
}