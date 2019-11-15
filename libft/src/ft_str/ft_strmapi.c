/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:42:38 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/14 16:42:42 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	char	*temp_result;
	int		i;

	if (s == NULL)
		return (NULL);
	result = ft_strdup(s);
	if (result == NULL)
		return (NULL);
	temp_result = result;
	i = 0;
	while (*s != '\0')
	{
		*temp_result = (*f)(i, *s);
		temp_result++;
		s++;
		i++;
	}
	*temp_result = '\0';
	return (result);
}
