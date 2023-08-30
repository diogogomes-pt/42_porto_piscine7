/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:24:59 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/08/30 18:50:21 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	size;

	i = 0;
	while (i < n && src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\n';
		i++;
	}
	return (dest);
}

int	main(void)
{
	int	size;
	char	*dest;
	char	*src;
	
	size = 10;
	src = "porto";
	printf("%s", ft_strncpy(dest, src, size));
}
