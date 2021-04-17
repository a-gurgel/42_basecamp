/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:35:18 by arebecca          #+#    #+#             */
/*   Updated: 2021/04/17 01:09:28 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int pw;

	pw = nb;
	if (pw > pw * nb)
		return (0);
	else if (power > 1)
		return (pw * ft_recursive_power(pw, power - 1));
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (pw);
}
