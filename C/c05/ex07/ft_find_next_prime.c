/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:50:03 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/06 19:00:56 by dgomes-a         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (ft_is_prime(nb) != 1)
			nb++;
		return (nb);
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{	
	if (argc != 2)
		return (0);
	else
		printf("%d", ft_find_next_prime(atoi(argv[1])));
}*/
