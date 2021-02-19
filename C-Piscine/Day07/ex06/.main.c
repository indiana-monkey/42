/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:03:04 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/29 20:21:41 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int ab);

int main(void)
{
	int a;
	int b;

	a = 13;
	b = 2147483647;
	printf("%d\n", ft_is_prime(a));
	printf("%d\n", ft_is_prime(b));	
}
