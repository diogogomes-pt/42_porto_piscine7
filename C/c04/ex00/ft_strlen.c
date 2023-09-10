/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:32:36 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/04 23:01:46 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%d\n", ft_strlen("Porto 42 len "));
	printf("%lu", strlen("Porto 42 len "));
}*/
