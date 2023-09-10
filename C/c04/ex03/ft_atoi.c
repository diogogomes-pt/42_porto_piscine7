/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:45:57 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/05 20:19:27 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	total;

	i = 0;
	sinal = 0;
	total = 0;
	while ((str[i] != '\0') && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
			sinal++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + str[i] - '0';
		i++;
	}
	if (sinal % 2 == 1)
		return (total * -1);
	return (total);
}
/*
#include <stdio.h>
int	main(void)
{	
	printf("%d", ft_atoi("--+--+1234ab567"));
}*/
