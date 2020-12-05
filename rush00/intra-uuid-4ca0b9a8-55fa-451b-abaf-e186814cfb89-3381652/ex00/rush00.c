/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 19:18:30 by ecoutinh          #+#    #+#             */
/*   Updated: 2020/11/23 02:38:14 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char ch);

void    rush(int x, int y)
{
    int c;
    int l;
  
    c = 1;
    l = 1;
    while (l <= y) 
  {
    while (c <= x) 
    {
      if ((l == 1 || l == y) && (c == 1 || c == x))
          ft_putchar('o');  
      else if (l == 1 || l == y)
          ft_putchar('-');
      else if (c == 1 || c == x)
          ft_putchar('|');
      else
          ft_putchar(' ');
      if (c == x)
          ft_putchar('\n');
      c++;
    }
    c = 1;
    l++;
  }
}
