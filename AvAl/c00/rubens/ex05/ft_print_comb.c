/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralmeida <ralmeida@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:36:38 by ralmeida          #+#    #+#             */
/*   Updated: 2020/12/01 00:20:48 by ralmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0' - 1;
	while (++num1 <= '9')
	{
		num2 = '0';
		while (++num2 <= '9')
		{
			num3 = '1';
			while (++num3 <= '9')
			{
				if (num1 < num2 && num2 < num3)
				{
					ft_putchar(num1);
					ft_putchar(num2);
					ft_putchar(num3);
					if (num1 < '7')
						write(1, ", ", 2);
				}
			}
		}
	}
}
