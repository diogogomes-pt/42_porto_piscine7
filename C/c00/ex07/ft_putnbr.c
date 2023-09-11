/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:08:26 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/11 19:09:29 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
	{
		print(nb);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
}*/
