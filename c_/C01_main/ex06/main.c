/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:49:52 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/02 19:10:10 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str);

int main(void)
{
	int i;
	char ddd[] = "davi teles veras";
	
	i = ft_strlen("davi teles veras saldanha\n");
	printf("%d\n", i);
	
	printf("%d\n", ft_strlen("davi teles saldanha\n"));
	
	printf("%s\n", "davi teles veras saldanha\n");
	
	printf("%s\n", ddd);
	printf("%d\n", ft_strlen(ddd));
	
}

