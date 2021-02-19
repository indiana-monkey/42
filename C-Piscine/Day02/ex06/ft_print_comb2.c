/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:57:54 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/02/02 10:21:47 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			ft_putchar('0' + (a / 10));
			ft_putchar('0' + (a % 10));
			ft_putchar(' ');
			ft_putchar('0' + (b / 10));
			ft_putchar('0' + (b % 10));
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
