/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:32:04 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/04 14:42:37 by dteles-v         ###   ########.fr       */
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
