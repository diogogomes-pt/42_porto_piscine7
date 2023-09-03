/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:45:57 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/03 22:08:56 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;

	while (str[i] != '\0')
	{
		c = c * 10 + str[i] - '0';
		i++;
	}
	return (c);
}

#include <stdio.h>
int	main(void)
{	
	int	t;

	t = ft_atoi("---+--+1234ab567");
	printf("%d ", t);
}
