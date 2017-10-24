#include "libft.h"

void * ft_memalloc(size_t size)
{
    void *final;

    if (size == 0)
        return (0);
    if ((final = (void *)malloc(size)) == 0)
        return (0);
    ft_memset(final, 0, size);
    return (final);
}