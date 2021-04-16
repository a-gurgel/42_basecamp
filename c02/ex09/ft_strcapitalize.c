/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:46:34 by arebecca          #+#    #+#             */
/*   Updated: 2021/04/13 20:35:50 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (j == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 'a' - 'A';
			j++;
		}
		else if (j > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 'a' - 'A';
		}
		else if ((str[i] < '0' || str[i] > '9') &&
				(str[i] < 'A' || str[i] > 'Z') &&
				(str[i] < 'a' || str[i] > 'z'))
			j = 0;
		else
			j++;
		i++;
	}
	return (str);
}
