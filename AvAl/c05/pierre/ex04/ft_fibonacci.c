/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnicolas <pnicolas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:01:34 by pnicolas          #+#    #+#             */
/*   Updated: 2020/11/25 14:52:08 by pnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index >= 0)
	{
		if (index == 0)
		{
			return (0);
		}
		else if (index == 1)
		{
			return (1);
		}
		else
		{
			return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
		}
	}
	else
	{
		return (-1);
	}
}
