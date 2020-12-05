/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:50:03 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/04 12:35:51 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_is_alpha(char *str)
{
	char	carac;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		carac = str[i];
		if ((carac >= 'A' && carac <= 'Z') || (carac >= 'a' && carac <= 'z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
