#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int counter;
    char *occur;

    occur = 0;
    counter = 0;
    while (*(s + counter) != '\0')
    {
        if (*(s + counter) == (char)c)
            occur = (char*)(s + counter);
        counter++;
    }
    if ((char)c == '\0' && *(s + counter) == '\0')
        occur = (char*)(s + counter);
    return (occur);
}