/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:09:26 by arebecca          #+#    #+#             */
/*   Updated: 2021/04/17 01:15:08 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int result;

	i = 2;
	result = 1;
	if (nb < 2)
	{
		return (result - 1);
	}
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			result--;
			break ;
		}
		i++;
	}
	return (result);
}

int		ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
