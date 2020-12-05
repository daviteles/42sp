/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:53:37 by dteles-v          #+#    #+#             */
/*   Updated: 2020/11/30 14:17:57 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int pri, int seg, int ter)
{
	if (pri < seg && seg < ter)
	{
		write(1, &pri, 1);
		write(1, &seg, 1);
		write(1, &ter, 1);
		if (pri != '7')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char pri;
	char seg;
	char ter;

	pri = '0';
	seg = '1';
	ter = '2';
	while (pri <= '7')
	{
		while (seg <= '8')
		{
			while (ter <= '9')
			{
				ft_print(pri, seg, ter);
				ter++;
			}
			seg++;
			ter = '2';
		}
		pri++;
		seg = '1';
	}
}
