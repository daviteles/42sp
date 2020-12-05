/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:41:02 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/02 19:31:34 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	primeiro_a;
	int	primeiro_b;

	primeiro_a = *a;
	primeiro_b = *b;
	*a = primeiro_a / primeiro_b;
	*b = primeiro_a % primeiro_b;
}
