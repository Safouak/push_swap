/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:48:10 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/19 14:48:10 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstswap(t_list **begin_list,
					t_list **current_list, t_list **prev_list)
{
	if ((*current_list) == *begin_list)
	{
		*begin_list = (*current_list)->next;
		(*current_list)->next = (*current_list)->next->next;
		(*begin_list)->next = (*current_list);
	}
	else
	{
		(*prev_list)->next = (*current_list)->next;
		(*current_list)->next = (*current_list)->next->next;
		(*prev_list)->next->next = (*current_list);
	}
	(*current_list) = *begin_list;
}
