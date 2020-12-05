/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralmeida <ralmeida@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 01:02:07 by ralmeida          #+#    #+#             */
/*   Updated: 2020/12/01 14:44:03 by ralmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char num1;
	char num2;

	num1 = -1;
	while (++num1 < 100)
	{
		num2 = 0;
		num2 = num1;
		while (++num2 < 100)
		{
			ft_putchar(num1 / 10 + '0');
			ft_putchar(num1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(num2 / 10 + '0');
			ft_putchar(num2 % 10 + '0');
			if (num1 < 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
