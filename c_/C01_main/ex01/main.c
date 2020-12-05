/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteles-v <dteles-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 04:22:03 by dteles-v          #+#    #+#             */
/*   Updated: 2020/12/02 01:11:12 by dteles-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
    int nbr;
    int *a;
    int **b;
    int ***c;
    int ****d;
    int *****e;
    int ******f;
    int *******g;
    int ********h;

  	nbr = 10;
    
    a = &nbr;
    b = &a;
    c = &b;
    d = &c;
    e = &d;
    f = &e;
    g = &f;
    h = &g;
  
    printf("%d\n", nbr);
    
	ft_ultimate_ft(&h);
    printf("%d\n", nbr);
    return(0);
	
}
