/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:32:30 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/04 14:46:34 by dteles-v         ###   ########.fr       */
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
