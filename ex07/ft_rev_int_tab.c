/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:54:29 by arebecca          #+#    #+#             */
/*   Updated: 2021/04/10 02:47:36 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int revert[size];
	int i;
	int j;

	i = size - 1;
	j = 0;
	while (j < size)
	{
		revert[j] = tab[i];
		i--;
		j++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = revert[i];
		i++;
	}
}
