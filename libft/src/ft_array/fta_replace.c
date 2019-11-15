/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fta_replace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 19:23:44 by souakrim          #+#    #+#             */
/*   Updated: 2018/02/17 11:22:37 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

/*
** Array::replace
** -
** replace a part of _self_ by _new_
** -
**       |---| <-len
** "echo $USER is cool"
**       |   \----\
** "echo john_smith is cool"
**       ^index
** -
** Returns a status
** 1 in case of failure (malloc)
** 0 otherwise.
*/

int		fta_replace(t_array *self, size_t index, size_t len, t_array *new)
{
	return (fta_popindex(self, index, len)
		|| fta_insert(self, new->data, new->size, index));
}
