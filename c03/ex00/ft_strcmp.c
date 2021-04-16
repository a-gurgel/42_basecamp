/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:11:58 by arebecca          #+#    #+#             */
/*   Updated: 2021/04/15 11:50:12 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		else if (s2[i] > s1[i] || s1[i] > s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (s2[i] != '\0')
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
