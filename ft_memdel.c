#include "libft.h"

void ft_memdel(void **ap)
{
    if (!ap || !*ap)
        return;
    if (*ap)
        free(*ap);
    *ap = 0;
}