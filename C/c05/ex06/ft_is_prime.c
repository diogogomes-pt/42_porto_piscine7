/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:37:37 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/06 18:49:35 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	else
		printf("%d", ft_is_prime(atoi(argv[1])));
}*/
