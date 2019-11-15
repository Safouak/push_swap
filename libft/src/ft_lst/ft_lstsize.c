/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:46:04 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/19 14:46:04 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *begin_list)
{
	t_list	*list_ptr;
	int		i;

	i = 0;
	list_ptr = begin_list;
	while (list_ptr)
	{
		list_ptr = list_ptr->next;
		i++;
	}
	return (i);
}
