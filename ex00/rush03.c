/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaldino <hbaldino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:15:03 by hbaldino          #+#    #+#             */
/*   Updated: 2021/04/03 20:34:00 by hbaldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int coluna, int linha)
{
	int ult_coluna;
	int ult_linha;

	ult_coluna = coluna;
	ult_linha = linha;
	linha = 1;
	while (linha <= ult_linha)
	{
		coluna = 1;
		while (coluna <= ult_coluna)
		{
			if (coluna == 1)
			{
				if (linha > 1 && linha < ult_linha)
				{
					ft_putchar('B');
				}
				else
				{
					ft_putchar('A');
				}
			}
			else if (coluna > 1 && coluna < ult_coluna)
			{
				if (linha > 1 && linha < ult_linha)
				{
					ft_putchar(' ');
				}
				else
				{
					ft_putchar('B');
				}
			}
			else if (coluna == ult_coluna)
			{
				if (linha > 1 && linha < ult_linha)
				{
					ft_putchar('B');
				}
				else
				{
					ft_putchar('C');
				}
			}
			else if (linha == ult_linha)
			{
				ft_putchar('A');
			}
			coluna++;
		}
		ft_putchar('\n');
		linha++;
	}
}
