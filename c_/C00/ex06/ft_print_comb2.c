/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:53:37 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/01 03:14:11 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char g_pri;
char g_seg;
char g_ter;
char g_qua;

void	ft_print(int g_pri, int g_seg, int g_ter, int g_qua)
{
	if ((10 * g_pri + 1 * g_seg) < (10 * g_ter + 1 * g_qua))
	{
		write(1, &g_pri, 1);
		write(1, &g_seg, 1);
		write(1, " ", 1);
		write(1, &g_ter, 1);
		write(1, &g_qua, 1);
		if (g_pri != '9' || g_seg != '8')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	g_pri = '0';
	g_seg = '0';
	g_ter = '0';
	g_qua = '0';
	while (g_pri <= '9')
	{
		while (g_seg <= '9')
		{
			while (g_ter <= '9')
			{
				while (g_qua <= '9')
				{
					ft_print(g_pri, g_seg, g_ter, g_qua);
					g_qua++;
				}
				g_ter++;
				g_qua = '0';
			}
			g_seg++;
			g_ter = '0';
		}
		g_pri++;
		g_seg = '0';
	}
}
