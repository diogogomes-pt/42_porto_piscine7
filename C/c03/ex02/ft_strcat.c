/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:47:55 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/02 22:43:12 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	t;
	int	x;

	i = 0;
	t = 0;
	x = 0;
	while (! (dest[i] == '\0'))
	{
		i++; 
	}
	while (src[t] != '\0')
	{
		dest[i] = src[t];
		t++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[] = "Diogo";
	char	src[] = "Gomes";
	printf("%s", ft_strcat(dest, src));
}*/
