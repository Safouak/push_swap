/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:45:27 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/19 14:45:27 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *begin_list)
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	if (list_ptr)
	{
		while (list_ptr->next)
		{
			list_ptr = list_ptr->next;
		}
		return (list_ptr);
	}
	return (list_ptr);
}
