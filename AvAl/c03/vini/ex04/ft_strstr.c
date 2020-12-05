/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarussa <vvarussa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:42:15 by vvarussa          #+#    #+#             */
/*   Updated: 2020/12/02 03:27:05 by vvarussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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

int		find(char *dest, char *to_find, int p)
{
	int i;

	i = 0;
	while (*(to_find + i) != '\0')
	{
		if (*(dest + p + i) != *(to_find + i))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *dest, char *to_find)
{
	int i;
	int p;

	i = 0;
	p = 0;
	if (*to_find == 0)
		return (dest);
	while (*(dest + i) != '\0')
	{
		if (*(dest + i) == *(to_find + p))
		{
			if (find(dest, to_find, i) > 0)
				return (dest + i);
		}
		i++;
	}
	return (NULL);
}
