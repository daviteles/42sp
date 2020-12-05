/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnicolas <pnicolas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 00:33:12 by pnicolas          #+#    #+#             */
/*   Updated: 2020/11/25 14:02:00 by pnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power >= 0)
	{
		if (power == 0)
		{
			return (1);
		}
		else
		{
			return (ft_recursive_power(nb, power - 1) * nb);
		}
	}
	else
	{
		return (0);
	}
}
