/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:07:28 by arebecca          #+#    #+#             */
/*   Updated: 2021/04/17 01:15:22 by arebecca         ###   ########.fr       */
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
