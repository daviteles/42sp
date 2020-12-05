/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:42:46 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/03 12:42:49 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char str1[]	= "kgjbwed~jh43593 4857^&*^$$^@$";
	char str2[]	= "\n;;lfkj;\0";
	char str3[]	= "";

	printf("Str1 deve ser 1 = %d\n", ft_str_is_printable(str1));
	printf("Str2 deve ser 0 = %d\n", ft_str_is_printable(str2));
	printf("Str3 deve ser 1 = %d\n", ft_str_is_printable(str3));
	return (0);
}

