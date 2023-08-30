/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:06:05 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/08/31 00:25:01 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] != '\0' && str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (((str[i] >= 97 && str[i] <= 122) ||
		(str[i] >= 65 && str[i] <= 90)) && (str[i - 1] < 48 ||
		(str[i - 1] > 57 && str[i - 1] < 65) ||
		(str[i - 1] > 90 && str[i - 1] < 97) ||
		str[i - 1] > 122))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	c[] = "ola, tudo bem? 42palAvras quarenta-e-duas; cinquenta+e+um";
	
	printf("%s",ft_strcapitalize(c)); 
}
