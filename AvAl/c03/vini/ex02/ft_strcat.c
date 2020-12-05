/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarussa <vvarussa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:51:25 by vvarussa          #+#    #+#             */
/*   Updated: 2020/12/01 02:44:12 by vvarussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int p;

	i = 0;
	p = ft_strlen(dest);
	while (*(src + i) != '\0')
	{
		*(dest + p + i) = *(src + i);
		i++;
	}
	*(dest + p + i) = *(src + i);
	return (dest);
}
