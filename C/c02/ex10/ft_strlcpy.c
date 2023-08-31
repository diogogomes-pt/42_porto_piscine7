/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:15:31 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/08/31 22:13:10 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	tam;

	i = 0;
	tam = 0;
	while (src[i] != '\0')
	{
		if (i < size)
		{
			dest[i] = src[i];
		}
		i++;
		tam++;
	}
	dest[i] = '\0';
	return (tam);
}

/*int	main(void)
{
	int	size;
	char	*dest;
	char	*src;
	
	size = 3;
	src = "portodafagag";
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s", dest);
}*/
