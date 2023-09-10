/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:45:13 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/10 19:22:28 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
		return (0);
	ptr = malloc (sizeof(*ptr) * (max - min));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	c;
	int	*result;

	result = ft_range(20, 30);
	c = 0;
	while (c <= 9)
	{
		printf("%d\n", result[c]);
		c++;
	}
	
}*/
