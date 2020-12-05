/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnicolas <pnicolas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:15:40 by pnicolas          #+#    #+#             */
/*   Updated: 2020/11/25 14:02:11 by pnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if (nb == 0)
		{
			return (1);
		}
		else
		{
			return (ft_recursive_factorial(nb - 1) * nb);
		}
	}
	else
	{
		return (0);
	}
}
