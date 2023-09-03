/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:48:11 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/03 21:26:48 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	t;

	i = 0;
	t = 0;
	while (dest[i] != '\0')
	{
		i++; 
	}
	while (src[t] != '\0' && t < nb)
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
	int	c;
	
	c = 3;
	printf("%s", ft_strncat(dest, src, c));
}*/
