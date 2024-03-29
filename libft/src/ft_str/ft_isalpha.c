/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:35:23 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/14 16:35:23 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if (((unsigned int)c >= 'a' && (unsigned int)c <= 'z') ||
		((unsigned int)c >= 'A' && (unsigned int)c <= 'Z'))
		return (1);
	else
		return (0);
}
