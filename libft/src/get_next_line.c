/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <rnugroho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 18:00:07 by souakrim          #+#    #+#             */
/*   Updated: 2019/05/13 16:08:07 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void				*ft_realloc(void *ptr, size_t size, size_t old_size)
{
	void				*nw_ptr;
	size_t				i;

	i = 0;
	nw_ptr = malloc(size);
	if (!size)
		size = 1;
	if (ptr && nw_ptr)
	{
		while (++i < old_size)
		{
			((unsigned char*)nw_ptr)[i] = ((unsigned char*)ptr)[i];
		}
		free(ptr);
	}
	return (nw_ptr);
}

static inline size_t	round_up(size_t base)
{
	size_t				power2;

	power2 = 2;
	while (power2 <= base)
		power2 <<= 1;
	return (power2);
}

static size_t			extend_line(char **line, size_t index, size_t crt_size)
{
	size_t				new_sz;

	new_sz = round_up(crt_size);
	if (index + 1 >= crt_size)
	{
		if (!(*line = ft_realloc(*line, new_sz, crt_size)))
			return (0);
		crt_size = new_sz;
	}
	return (crt_size);
}

int						get_next_line(int filde, char **line)
{
	size_t				crt_size;
	size_t				index;
	int					end_file;
	int					rd;

	index = 0;
	crt_size = BUFF_SIZE;
	end_file = NO_READ;
	if (!line || !(*line = ft_realloc(NULL, crt_size, 0)))
		return (ERROR);
	while (1)
	{
		if (!(crt_size = extend_line(line, index, crt_size)))
			return (ERROR);
		if ((rd = read(filde, (*line) + index, 1)) == -1)
			return (ERROR);
		else if (!rd)
			return (end_file);
		else if ((*line)[index++] == '\n')
		{
			(*line)[--index] = '\0';
			return (READ);
		}
		end_file = READ;
	}
}
