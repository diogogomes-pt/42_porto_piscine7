/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:18:52 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/06 01:58:06 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		total = (total * nb);
		nb--;
	}
	return (total);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	else
		printf("%d", ft_iterative_factorial(atoi(argv[1])));
}*/
