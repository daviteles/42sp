/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:43:41 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/03 22:16:48 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[]	= "OI";
	char dest[]	= "DAVI";

	printf("%s\n", ft_strcpy(&dest[0], &src[0]));
	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", strcpy(dest, src));
	
	return (0);
}
