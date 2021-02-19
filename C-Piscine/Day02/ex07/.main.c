/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 23:04:11 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/31 23:04:16 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void ft_putnbr(int nb);

int main(void)
{
	int a;

	a = -10;
	ft_putnbr(a);
	return 0;
}
