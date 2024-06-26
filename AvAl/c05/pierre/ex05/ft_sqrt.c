/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnicolas <pnicolas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:29:29 by pnicolas          #+#    #+#             */
/*   Updated: 2020/12/01 14:16:38 by pnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int x;
	int y;

	x = nb;
	y = 1;
	while (x > y && x > 0)
	{
		x = (x + y) / 2;
		y = nb / x;
	}
	if (x * x == nb)
		return (x);
	else
		return (0);
}
