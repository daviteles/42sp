/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarussa <vvarussa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:25:57 by vvarussa          #+#    #+#             */
/*   Updated: 2020/12/02 21:54:45 by vvarussa         ###   ########.fr       */
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
