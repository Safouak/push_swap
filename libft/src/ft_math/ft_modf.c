/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 14:23:23 by souakrim          #+#    #+#             */
/*   Updated: 2018/02/23 14:31:04 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return the fraction of the parameter num
*/

double
	ft_modf(double num)
{
	long int		intpart;

	intpart = (long int)num;
	return (num - intpart);
}
