#include "libft.h"

void ft_putendl(char const *s)
{
    if (!s)
        return;
    ft_putstr((char *)s);
    ft_putchar('\n');
}