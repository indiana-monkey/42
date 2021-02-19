/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:17:55 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/29 20:12:42 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
	int a;
	int b;

	a = 2;
	b = 3;
	printf("%d\n", ft_recursive_power(a, b));
	return 0;
}
