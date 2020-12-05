/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 01:17:13 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/02 02:03:04 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_swap(int *a, int *b);

int main(void)
{
int a = 10;
int b = 30;

printf("%d\n", a);
printf("%d\n", b);
ft_swap(&a, &b);
printf("------------\n");
printf("%d\n", a);
printf("%d\n", b);
    
}
