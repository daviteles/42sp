/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiego-d <adiego-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:56:21 by adiego-d          #+#    #+#             */
/*   Updated: 2020/12/03 22:56:23 by adiego-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_minus(char *str, int count)
{
	int count2;
	int n_minus;

	count2 = 0;
	n_minus = 0;
	while (str[count2] != '\0' && count2 < count)
	{
		if (str[count2] == '-')
		{
			n_minus++;
		}
		count++;
		count2++;
	}
	if (n_minus % 2 == 0)
	{
		return (0);
	}
	return (1);
}

int		count_n(char *str, int count)
{
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
		{
			count++;
		}
		else
		{
			break ;
		}
	}
	return (count - 1);
}

int		cast(char *str, int min, int max, int n_minus)
{
	int res;

	res = 0;
	while (min <= max)
	{
		res = res * 10 + str[min] - '0';
		min++;
	}
	if (n_minus == 1)
	{
		return (res * -1);
	}
	return (res);
}

int		check_str(char *str, int max)
{
	int c;
	int check;

	c = 0;
	check = 0;
	while (str[c] != '\0' && c < max)
	{
		if ((str[c] < '\t' || str[c] > '\r') && str[c] != ' '
		&& str[c] != '+' && str[c] != '-')
		{
			check = 1;
		}
		c++;
	}
	return (check);
}

int		ft_atoi(char *str)
{
	int count;
	int n_minus;
	int max;
	int check;

	check = 0;
	n_minus = 0;
	count = 0;
	max = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
		{
			n_minus = count_minus(str, count);
			max = count_n(str, count);
			check = check_str(str, count);
			break ;
		}
		count++;
	}
	if (check == 1)
		return (0);
	return (cast(str, count, max, n_minus));
}
