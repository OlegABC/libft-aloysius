#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    int counter;
    unsigned char *dst_c;
    unsigned char *src_c;

    dst_c = (unsigned char *)dst;
    src_c = (unsigned char *)src;
    counter = 0;
    if (n == 0)
        return (dst_c);
    while (counter < (int)n)
    {
        dst_c[counter] = src_c[counter];
        counter++;
    }
    return (dst);
}