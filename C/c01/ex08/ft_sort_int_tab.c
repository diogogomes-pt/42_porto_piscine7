/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:18:51 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/09/02 17:39:08 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	i;
	int	temp;

	i = 0;
	c = 0;
	while (i < size)
	{
		while (c < size)
		{
			if (tab[i] > tab[c])
			{
				temp = tab[i];
				tab[i] = tab[c];
				tab[c] = temp;
			}
			c++;
		}
		i++;
		c = i + 1;
	}
}

/*int	main(void)
{
	int	c[] = {7, 6, 4, 3, 5};
	int 	siz;
	int	i;
	
	i = 0;
	siz = 5;
	ft_sort_int_tab(c, siz);
	while (i < siz)
	{
		printf("%d", c[i]);
		i++;
	}
}*/
