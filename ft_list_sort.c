/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 20:32:15 by tkeynes           #+#    #+#             */
/*   Updated: 2017/11/16 18:16:48 by tkeynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_ptr_swap__(void **a, void **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		changed;
	t_list	*head;

	changed = 1;
	if (*begin_list)
		while (changed)
		{
			changed = 0;
			head = *begin_list;
			while (head->next)
			{
				if ((*cmp)(head->data, head->next->data) > 0)
				{
					ft_ptr_swap__(&head->data, &head->next->data);
					changed = 1;
				}
				head = head->next;
			}
		}
}
