/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarussa <vvarussa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 01:47:58 by vvarussa          #+#    #+#             */
/*   Updated: 2020/12/02 03:49:21 by vvarussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	p;

	p = ft_strlen(dest);
	i = 0;
	if (ft_strlen(src) + p > size)
	{
		while (i < size - p)
		{
			*(dest + p + i) = *(src + i);
			i++;
		}
		return (p + size);
	}
	else
	{
		while (i <= ft_strlen(src))
		{
			*(dest + p + i) = *(src + i);
			i++;
		}
		return (p + ft_strlen(src));
	}
}
