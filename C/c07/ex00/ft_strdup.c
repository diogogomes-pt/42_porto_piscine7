/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:09:10 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/07 20:43:50 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	while (src[i] != '\0')
		i++;
	ptr = malloc(sizeof(src) * i);
	j = 0;
	if (ptr == NULL)
		return (0);
	else
	{
		while (src[j] != '\0')
		{
			ptr[j] = src[j];
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strdup("fafa"));
}*/
