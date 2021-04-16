/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:17:01 by arebecca          #+#    #+#             */
/*   Updated: 2021/04/16 00:40:08 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		else if (s2[i] > s1[i] || s1[i] > s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (s2[i] != '\0')
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

int		main(int argc, char **argv)
{
	int qt;
	int i;
	int j;
	int index_agrs[argc];

	qt = 0;
	while (qt++ < argc)
		index_agrs[qt] = qt;
	i = 1;
	while (i < argc)
	{
		j = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[index_agrs[i]], argv[index_agrs[j]]) > 0)
				ft_swap(&index_agrs[i], &index_agrs[j]);
			j++;
		}
		ft_putstr(argv[index_agrs[i]]);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
