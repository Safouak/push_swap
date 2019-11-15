/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:30:36 by souakrim          #+#    #+#             */
/*   Updated: 2019/05/13 16:10:55 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int
	pw_is_line_valid(char *line)
{
	if (ft_strnequ(line, "sa", 3))
		return (1);
	else if (ft_strnequ(line, "sb", 3))
		return (1);
	else if (ft_strnequ(line, "ss", 3))
		return (1);
	else if (ft_strnequ(line, "pa", 3))
		return (1);
	else if (ft_strnequ(line, "pb", 3))
		return (1);
	else if (ft_strnequ(line, "ra", 3))
		return (1);
	else if (ft_strnequ(line, "rb", 3))
		return (1);
	else if (ft_strnequ(line, "rr", 3))
		return (1);
	else if (ft_strnequ(line, "rra", 4))
		return (1);
	else if (ft_strnequ(line, "rrb", 4))
		return (1);
	else if (ft_strnequ(line, "rrr", 4))
		return (1);
	else
		return (0);
}

void
	pw_checker(char *line, t_array *a, t_array *b)
{
	int			i;
	int			index;
	const char	*c = "spr";
	const void	*op[] = {&ch_swap, &ch_push, &ch_rotate, &ch_rev_rotate};

	i = 0;
	index = 1;
	while (c[i] != '\0' && line[0] != c[i])
		i++;
	if (ft_strlen(line) == 3)
	{
		i = 3;
		index++;
	}
	if (line[0] == 's' && line[index] == 's')
		line[index] = 'r';
	if (line[index] == 'a' || line[index] == 'r')
		(((void (*)())op[i])(a, b));
	if (line[index] == 'b' || line[index] == 'r')
		(((void (*)())op[i])(b, a));
}

static int
	pw_check_line(t_array *a, t_array *b)
{
	char		*line;
	int			f;

	while ((f = get_next_line(0, &line)))
	{
		if (!pw_is_line_valid(line))
		{
			ft_dprintf(2, "Error\n");
			free(line);
			return (-1);
		}
		pw_checker(line, a, b);
		free(line);
	}
	if (!f)
		free(line);
	return (0);
}

int
	main(int ac, char **av)
{
	t_array		a;
	t_array		b;
	int			ret;

	a = NEW_ARRAY(int);
	b = NEW_ARRAY(int);
	ret = 0;
	if (ac > 1)
	{
		if ((ret = pw_get_arg(&a, 1, ac, av)) != -1)
			if ((ret = pw_check_line(&a, &b)) != -1)
			{
				if (b.size == 0 && pw_is_sorted(&a))
					ft_printfln("OK");
				else
					ft_printfln("KO");
			}
		fta_clear(&a);
		fta_clear(&b);
	}
	return (ret);
}
