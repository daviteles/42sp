/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:37:44 by rpaulino          #+#    #+#             */
/*   Updated: 2020/12/04 18:48:36 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int n)
{
	if (n < 2)
		return (n);
	return (fib(n - 1) + fib(n - 2));
}
