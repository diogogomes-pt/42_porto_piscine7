/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:26:31 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/08/27 23:44:45 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ciclo(int a, int b, int c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			ciclo(a, b, c);
			++b;
		}
		++a;
	}
}

void	ciclo(int a, int b, int c)
{
	while (c <= '9')
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		if (a != '7')
		{
			write (1, ",", 1);
			write (1, " ", 1);
		}
		++c;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/
