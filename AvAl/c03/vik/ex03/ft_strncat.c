/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 04:19:38 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/04 01:55:34 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	p;

	i = 0;
	p = 0;
	while (*(dest + p) != '\0')
		p++;
	while (*(src + i) != '\0' && i < nb)
	{
		*(dest + p + i) = *(src + i);
		i++;
	}
	*(dest + p + i) = '\0';
	return (dest);
}
