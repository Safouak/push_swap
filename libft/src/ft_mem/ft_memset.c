/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:37:32 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/14 16:37:32 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int src, size_t len)
{
	unsigned char	*ptr;

	ptr = str;
	while (len-- > 0)
		*ptr++ = (unsigned char)src;
	return (str);
}
