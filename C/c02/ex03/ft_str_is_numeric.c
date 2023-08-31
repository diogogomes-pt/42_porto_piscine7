/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:20:18 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/08/31 20:21:26 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;
	char	a;
	char	b;
	char	c;
	char	d;
	char	e;

	str1 = "134";
	str2 = "`123";
	str3 = "12$56";
	str4 = "3asbfd6";
	str5 = "";
	a = '0' + ft_str_is_numeric(str1);
	b = '0' + ft_str_is_numeric(str2);
	c = '0' + ft_str_is_numeric(str3);
	d = '0' + ft_str_is_numeric(str4);
	e = '0' + ft_str_is_numeric(str5);
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}*/
