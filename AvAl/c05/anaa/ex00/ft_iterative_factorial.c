/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:15:08 by aclaudia          #+#    #+#             */
/*   Updated: 2020/12/02 23:14:53 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	long int	acc;
	int			counter;

	if (nb < 1)
		return (0);
	counter = nb;
	acc = 1;
	while (counter > 1)
	{
		acc *= counter;
		counter--;
	}
	return (acc);
}
