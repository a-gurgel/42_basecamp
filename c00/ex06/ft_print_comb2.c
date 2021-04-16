/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:42:06 by arebecca          #+#    #+#             */
/*   Updated: 2021/04/07 00:10:07 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_chars(char n1, char n2)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
}

void	ft_print_number(int n)
{
	char first;
	char second;

	if (n < 10)
	{
		first = '0';
		second = n + '0';
		ft_print_chars(first, second);
	}
	else
	{
		first = n / 10 + '0';
		second = n % 10 + '0';
		ft_print_chars(first, second);
	}
}

void	ft_print_comb2(void)
{
	int number_1;
	int number_2;

	number_1 = 0;
	while (number_1 <= 98)
	{
		number_2 = number_1 + 1;
		while (number_2 <= 99)
		{
			ft_print_number(number_1);
			write(1, " ", 1);
			ft_print_number(number_2);
			if (number_1 != 98 || number_2 != 99)
			{
				write(1, ", ", 2);
			}
			number_2++;
		}
		number_1++;
	}
}
