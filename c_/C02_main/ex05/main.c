/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:56:33 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/03 11:56:35 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char str1[]	= "UPPERCASE";
	char str2[]	= "BaseCamp";
	char str3[]	= "";

	printf("Str1 deve ser 1 = %d\n", ft_str_is_uppercase(str1));
	printf("Str2 deve ser 0 = %d\n", ft_str_is_uppercase(str2));
	printf("Str3 deve ser 1 = %d\n", ft_str_is_uppercase(str3));
	return (0);
}
