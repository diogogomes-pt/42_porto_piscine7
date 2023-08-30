/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:53:33 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/08/30 23:04:25 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 65 && str[i] < 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	c[] = "DIOgO";

	printf("%s", ft_strlowcase(c));
}
