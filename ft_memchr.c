#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    int counter;

    counter = 0;
    if (n == 0)
        return (0);
    while (counter < (int)n && ((unsigned char*)s)[counter] != '\0')
    {
        if (((unsigned char*)s)[counter] == (unsigned char)c)
            return (void *)(s + counter);
        counter++;
    }
    if ((unsigned char)c == '\0' && ((unsigned char*)s)[counter] == '\0')
        return (void *)(s + counter);
    return (0);
}