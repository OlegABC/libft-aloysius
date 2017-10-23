//
// Created by Tim Keynes on 04/10/2017.
//

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char	*head;

    if (len == 0)
        return (b);
    head = (unsigned char *)b;
    while (len--)
    {
        *head = (unsigned char)c;
        if (len)
            head++;
    }
    return (b);
}