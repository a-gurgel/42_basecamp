/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:12:05 by arebecca          #+#    #+#             */
/*   Updated: 2021/04/15 00:45:55 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *copy_dest;

	copy_dest = dest;
	while (*copy_dest != '\0')
	{
		copy_dest++;
	}
	while (*src != '\0')
	{
		*copy_dest = *src;
		copy_dest++;
		src++;
	}
	*copy_dest = '\0';
	return (dest);
}
