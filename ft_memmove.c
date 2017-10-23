#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char	*d;
    char	*s;
    size_t	i;

    d = (char*)dst;
    s = (char*)src;
    i = 0;
    if (s < d)
        while (len--)
            d[len] = s[len];
    else
        ft_memcpy(d, s, len);
    return (d);
}