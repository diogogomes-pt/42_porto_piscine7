/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:48:25 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/02 22:33:16 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (to_find[c] != '\0')
		{
			if (str[i + c] == to_find[c])
			{
				c++;
			}
			else
				break ;
		}
		if (to_find[c] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char st[]="Diogo Gomes";
	char tofind[]="";

	printf("%s", ft_strstr(st, tofind));
}*/
