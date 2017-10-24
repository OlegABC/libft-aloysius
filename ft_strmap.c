#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    char	*ret;
    size_t	retlen;
    int		i;

    i = 0;
    if (!s || !f)
        return (NULL);
    retlen = ft_strlen((char *)s);
    if ((ret = ft_memalloc(retlen + 1)) == 0)
        return (0);
    while (*s)
    {
        ret[i++] = f(*s);
        s++;
    }
    return (ret);
}