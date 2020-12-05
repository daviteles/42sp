/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 02:16:20 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/02 02:57:31 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
int a = 10;
int b = 30;
int div;
int mod;

printf("%d\n", a);
printf("%d\n", b);

ft_div_mod(a, b, &div, &mod);

printf("------------\n");
printf("%d\n", div);
printf("%d\n", mod);
    
}
