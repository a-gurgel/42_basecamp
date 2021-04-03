/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:15:03 by hbaldino          #+#    #+#             */
/*   Updated: 2021/04/03 22:10:27 by arebecca         ###   ########.fr       */
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
			if (coluna == 1 || coluna == ult_coluna) // tratanto os cantos do retangulo A e C
			{
				if (coluna == 1 && (linha == 1 || linha == ult_linha))
				{
					ft_putchar('A');
				}
				else if (coluna == ult_coluna && (linha == 1 || linha == ult_linha))
				{
					ft_putchar('C');
				}
				else // tratando as bordas da primeira e ultima coluna
				{
					ft_putchar('F');
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
