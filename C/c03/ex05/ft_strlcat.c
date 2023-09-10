/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:48:40 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/03 18:14:09 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	tam;
	unsigned int	c;

	if (size <= len(dest))
		return (len(src) + size);
	tam = len(dest);
	c = 0;
	while (src[c] != '\0' && tam + 1 < size)
	{
		dest[tam] = src[c];
		c++;
		tam++;
	}
	dest[tam] = '\0';
	return (len(dest) + len(&src[c]));
}
/*
#include <stdio.h>
int		main(void)
{
	char dest[15] = "1234";
	char src[] = "5678";
	unsigned int size = 7;
	unsigned int tamanho;

	tamanho = ft_strlcat(dest, src, size);
	printf("Destino = %s\nTamanho (dest + src) = %d", dest, tamanho);

	return (0);
}*/
