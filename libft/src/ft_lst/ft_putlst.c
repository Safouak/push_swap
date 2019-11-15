/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 17:26:51 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/19 17:26:52 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlst(t_list *begin_lst)
{
	t_list *lst;

	lst = begin_lst;
	while (lst)
	{
		ft_putstr("[");
		ft_putstr(lst->content);
		ft_putstr("]");
		ft_putstr(" -> ");
		lst = lst->next;
	}
}
