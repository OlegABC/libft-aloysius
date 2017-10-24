#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char	*ret;
    size_t	retlen;
    int		i;
    unsigned int counter;

    i = 0;
    counter = 0;
    if (!s || !f)
        return (NULL);
    retlen = ft_strlen((char *)s);
    if ((ret = ft_memalloc(retlen + 1)) == 0)
        return (0);
    while (*s)
    {
        ret[i++] = f(counter, *s);
        s++;
        counter++;
    }
    return (ret);
}