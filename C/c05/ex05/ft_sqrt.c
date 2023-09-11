/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:28:08 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/06 18:35:43 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	number;

	number = 0;
	if (nb > 2147395600 || nb <= 0)
		return (0);
	while ((number * number) < nb)
		number++;
	if ((number * number) == nb)
		return (number);
	else
		return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{	
	if (argc != 2)
		return (0);
	else
		printf("%d", ft_sqrt(atoi(argv[1])));
}*/
