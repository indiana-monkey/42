/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:05:53 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/29 20:25:35 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	int a;
	int b;

	a = 21;
	b = 13;
	printf("%d\n", ft_find_next_prime(a));
	printf("%d\n", ft_find_next_prime(b));
	return 0;
}

