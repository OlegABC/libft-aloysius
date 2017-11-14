/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 20:14:39 by tkeynes           #+#    #+#             */
/*   Updated: 2017/11/14 20:42:14 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char*str;

	str = (char *)s;
	while (n--)
	{
		if (*str == (char)c)
			return (str);
		++str;
	}
	return (0);
}
