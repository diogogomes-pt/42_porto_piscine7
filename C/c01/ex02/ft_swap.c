/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:41:04 by dgomes-a          #+#    #+#             */
/*   Updated: 2023/08/29 00:08:50 by dgomes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	c;
	int	d;
	int	*temp1;
	int	*temp2;

	c = 10;
	d = 20;
	temp1 = &c;
	temp2 = &d;
	ft_swap(temp1, temp2);
	printf("A: %u\n",*temp1);
	printf("B: %u\n",*temp2);
}*/
