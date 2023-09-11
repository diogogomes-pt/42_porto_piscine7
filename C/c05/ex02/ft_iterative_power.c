/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:41:54 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/06 01:56:38 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;
	int	c;

	c = 0;
	total = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (c < power)
	{
		total *= nb;
		c++;
	}
	return (total);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	else
		printf("%d", ft_iterative_power(argv[1][0] - '0', argv[1][3] - '0'));
}
*/
