/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:03:57 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/11 19:10:12 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int number)
{
	number = number + 48;
	write(1, &number, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putnbr(a / 10);
			putnbr(a % 10);
			write(1, " ", 1);
			putnbr(b / 10);
			putnbr(b % 10);
			if (a != 98 || b != 99)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
