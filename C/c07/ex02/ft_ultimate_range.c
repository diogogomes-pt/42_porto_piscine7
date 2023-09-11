/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:26:57 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/10 19:09:41 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = malloc(sizeof(*ptr) * (max - min));
	if (ptr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = ptr;
	i = 0;
	while (max > min)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*range;
	int	len;
	int	i;

	i = 0;
	len = ft_ultimate_range(&range, 20, 30);
	while (i < len)
	{
		printf("%d\n", range[i]);
		i++;
	}
}*/
