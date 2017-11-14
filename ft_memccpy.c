/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 19:54:59 by tkeynes           #+#    #+#             */
/*   Updated: 2017/11/14 19:55:10 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
size_t n)
{
	unsigned int		i;
	unsigned char		*s1;
	const unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if ((*s1++ = *s2++) == (unsigned char)c)
			return (s1);
		i++;
	}
	return (0);
}
