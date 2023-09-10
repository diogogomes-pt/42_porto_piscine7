/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:22:06 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/10 22:29:49 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*cat(char *dest, char *src, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	j = 0;
	while (sep[j])
	{
		dest[i] = sep[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	totallen(int size, char **strs)
{
	int	total;
	int	i;
	int	j;

	total = 1;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[j])
		{
			total++;
			j++;
		}
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final;
	int		tam;
	int		i;

	if (size == 0)
	{
		final = (char *)malloc(sizeof(char));
		return (final);
	}
	tam = totallen(size, strs);
	final = (char *)malloc((tam + (size - 1) * len(sep)) * sizeof(char *) + 1);
	if (!final)
		return (NULL);
	final[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (i == size - 1)
			final = cat(final, strs[i], "\0");
		else
			final = cat(final, strs[i], sep);
		i++;
	}
	return (final);
}
/*
#include <stdio.h>
int		main(void)
{
	int		i;
	char	**strs;
	char	*sep;
	char	*final;
	int		tam;

	tam = 4;
	strs = (char**)malloc(tam * sizeof(strs));
	strs[0] = "porto";
	strs[1] = "42";
	strs[2] = "diogo";
	strs[3] = "gomes";
	sep = " ";
	i = 1;
	while (i < tam)
	{
		final = ft_strjoin(i, strs, sep);
		printf("%s\n", final);
		free(final);
		i++;
	}
}*/
