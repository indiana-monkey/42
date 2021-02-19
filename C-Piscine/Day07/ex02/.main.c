/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 11:22:06 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/29 20:09:39 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	int a;
	int b;

	a = 2;
	b = 2;
	printf("%d\n", ft_iterative_power(a, b));
	return 0;
}
