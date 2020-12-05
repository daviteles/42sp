/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:49:28 by rpaulino          #+#    #+#             */
/*   Updated: 2020/12/04 17:41:48 by rpaulino         ###   ########.fr       */
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

int		prime(int nb)
{
	int i;
	int x;

	if (nb == 2)
		return (1);
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

int		ft_find_next_prime(int nb)
{
	int stop;
	int i;

	if (nb <= 1)
		return (2);
	if (prime(nb) == 1)
		return (nb);
	if (nb == 4)
		return (5);
	i = nb + 1;
	stop = 0;
	while (stop == 0)
	{
		if (i % 10 == 1 || i % 10 == 3 ||
			i % 10 == 7 || i % 10 == 9)
		{
			if (prime(i) == 1)
				return (i);
		}
		i++;
	}
	return (0);
}
