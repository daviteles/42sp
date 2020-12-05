/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaudia <aclaudia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:35:41 by aclaudia          #+#    #+#             */
/*   Updated: 2020/12/03 19:54:17 by aclaudia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = power;
	result = 1;
	while (i > 0)
	{
		result *= nb;
		i--;
	}
	return (result);
}
