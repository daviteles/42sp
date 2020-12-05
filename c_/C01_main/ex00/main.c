/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 04:22:03 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/01 11:54:13 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int var;
	var = 2;

	printf("var inicial = %d\n", var);
	
	ft_ft(&var);
	printf("var final = %d\n", var);
	return(0);
}
