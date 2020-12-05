/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnicolas <pnicolas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 00:33:12 by pnicolas          #+#    #+#             */
/*   Updated: 2020/11/25 14:02:05 by pnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int pow;

	pow = 1;
	if (power >= 0)
	{
		while (power > 0)
		{
			pow = pow * nb;
			power--;
		}
	}
	else
	{
		return (0);
	}
	return (pow);
}
