#include "libft.h"

char	*ft_strdup(char *src)
{
	char *dest;

	if ((dest = (char*)malloc(sizeof(*src) * (ft_strlen(src) + 1))) == 0)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}