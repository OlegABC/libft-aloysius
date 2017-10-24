#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    int counter;
    char *final;

    if (!s)
        return (0);
    counter = 0;
    if ((final = ft_strnew(len)) == 0)
        return (0);
    while (len)
    {
        final[counter] = s[start];
        start++;
        counter++;
        len--;
    }
    return (final);
}