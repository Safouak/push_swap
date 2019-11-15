/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 21:10:38 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/15 21:10:40 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list_ptr;
	t_list	*result;
	t_list	*temp;

	list_ptr = lst;
	result = NULL;
	while (list_ptr)
	{
		temp = (*f)(list_ptr);
		ft_lstaddlast(&result, ft_lstnew(temp->content, temp->content_size));
		list_ptr = list_ptr->next;
	}
	return (result);
}
