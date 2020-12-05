/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:53:43 by dtakara           #+#    #+#             */
/*   Updated: 2020/12/04 18:33:20 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	unsigned int	i;
	char			c;

	i = 0;
	if (argc)
	{
		while (argv[0][i] != '\0')
		{
			c = argv[0][i];
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
