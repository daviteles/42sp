/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:46:18 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/03 22:38:54 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[]	= "Hello";
	char dest[]	= "davi";

	printf("%s\n", ft_strncpy(dest, src, 2));
	printf("%s\n", strncpy(dest, src, 2));
	return (0);
}
