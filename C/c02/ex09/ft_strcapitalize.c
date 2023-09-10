/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:06:05 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/08/31 20:05:02 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if (c == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (c == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') || str[i] > 122)
			c = 1;
		else if (str[i] > 'Z' && str[i] < 'a')
			c = 1;
		else
			c = 0;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	c[] = "ola, tudo bem? 42palAvras quarenta-e-duas; cinquenta+e+um";
	
	printf("%s",ft_strcapitalize(c)); 
}*/
