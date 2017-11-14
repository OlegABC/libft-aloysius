/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:04:35 by tkeynes           #+#    #+#             */
/*   Updated: 2017/11/14 21:26:29 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*final;

	if ((final = ((t_list *)malloc(sizeof(t_list)))) == 0)
		return (0);
	if (!content)
	{
		final->content = 0;
		final->content_size = 0;
		return (final);
	}
	final->content_size = content_size;
	if (!(final->content = (void *)malloc(content_size)))
		return (0);
	ft_memcpy(final->content, content, content_size);
	return (final);
}
