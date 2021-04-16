/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:15:03 by hbaldino          #+#    #+#             */
/*   Updated: 2021/04/04 06:13:47 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	lateral_columns(int column, int line, int last_column, int last_line);
void	middle_columns(int column, int line, int last_column, int last_line);

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
			lateral_columns(column, line, last_column, last_line);
			middle_columns(column, line, last_column, last_line);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}

void	lateral_columns(int column, int line, int last_column, int last_line)
{
	if (column == 1 && (line == 1 || line == last_line))
	{
		ft_putchar('o');
	}
	else if (column == last_column && (line == 1 || line == last_line))
	{
		ft_putchar('o');
	}
	else if (column == 1 || column == last_column)
	{
		ft_putchar('|');
	}
}

void	middle_columns(int column, int line, int last_column, int last_line)
{
	if (column > 1 && column < last_column)
	{
		if (line > 1 && line < last_line)
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('-');
		}
	}
}
