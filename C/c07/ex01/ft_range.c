/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:45:13 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/07 20:56:05 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{	
	int	*ptr;
	int	i;
	
	if (min >= max)
		return (NULL);
	ptr = malloc (sizeof(*ptr) * (max - min));
	if (ptr == NULL)
		return (0);
	else
	{	
		i = 0;
		while (min < max)
		{
			ptr[0] = min + 1;
			i++;
			min++;
		}
		return (ptr);
	}
	
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_range(20, 30));
}
