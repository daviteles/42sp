/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralmeida <ralmeida@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 04:17:52 by ralmeida          #+#    #+#             */
/*   Updated: 2020/11/21 16:24:18 by ralmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int c;

	c = 122;
	while (c <= 97)
	{
		write(1, &c, 1);
		c--;
	}
}
