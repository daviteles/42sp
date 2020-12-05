/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 04:11:28 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/04 01:54:20 by vnedina-         ###   ########.fr       */
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
