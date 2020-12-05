/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 00:32:48 by rpaulino          #+#    #+#             */
/*   Updated: 2020/12/04 18:49:00 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		almost_sqrt(int nb)
{
	long int x;
	long int n;

	x = nb;
	n = 0;
	while (n < x)
	{
		if (n * n > nb)
		{
			nb = n;
			return (nb);
		}
		n++;
	}
	return (0);
}

int		ft_is_prime(int nb)
{
	int i;
	int x;

	if (nb <= 1)
		return (0);
	x = almost_sqrt(nb);
	i = 2;
	while (i < x)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
