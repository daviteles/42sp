/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:50:21 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/03 23:21:29 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char str1[]	= "Hello";
	char str2[]	= "davi teles";
	char str3[]	= "";

	printf("Str1 deve ser 1 = %d\n", ft_str_is_alpha(str1));
	printf("Str2 deve ser 0 = %d\n", ft_str_is_alpha(str2));
	printf("Str3 deve ser 1 = %d\n", ft_str_is_alpha(str3));

	return (0);
}
