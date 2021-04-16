/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:12:08 by arebecca          #+#    #+#             */
/*   Updated: 2021/04/15 00:53:26 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*copy_dest;
	unsigned int	i;

	i = 0;
	copy_dest = dest;
	while (*copy_dest != '\0')
	{
		copy_dest++;
	}
	while (*src != '\0' && (i < nb))
	{
		*copy_dest = *src;
		copy_dest++;
		src++;
		i++;
	}
	*copy_dest = '\0';
	return (dest);
}
