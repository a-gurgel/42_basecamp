/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:33:57 by arebecca          #+#    #+#             */
/*   Updated: 2021/04/17 01:03:17 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factorial;

	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	factorial = 1;
	while (nb > 0)
	{
		factorial *= nb--;
	}
	return (factorial);
}
