/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:40:59 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/02 12:21:33 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int main(void)
{

int a = 30;
int b = 10;


printf("%d\n", a);
printf("%d\n", b);

ft_ultimate_div_mod(&a, &b);

printf("------------\n");
printf("%d\n", a);
printf("%d\n", b);

}