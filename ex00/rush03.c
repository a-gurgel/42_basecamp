/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:15:03 by hbaldino          #+#    #+#             */
/*   Updated: 2021/04/04 01:37:19 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int column, int line)
{
	int last_column;
	int last_line;

	last_column = column;
	last_line = line;
	line = 1;
	while (line <= last_line)
	{
		column = 1;
		while (column <= last_column)
		{
			// esses dois ifs cuidam dos cantos do retangulo
			if (column == 1 && (line == 1 || line == last_line))
			{
				ft_putchar('A');
			}
			else if (column == last_column && (line == 1 || line == last_line))
			{
				ft_putchar('C');
			}
			// tratando as bordas da primeira e ultima coluna
			else if (column == 1 || column == last_column) 
			{
				ft_putchar('F');
			}			
			// tratando o recheio
			else if (column > 1 && column < last_column)
			{
				if (line > 1 && line < last_line)
					ft_putchar(' ');
				else // line == 1 || line == last_line
				{
					ft_putchar('B');
				}
			}
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
