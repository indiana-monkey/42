/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 09:22:09 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/29 22:51:50 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb);

int main(void)
{
	int a;
	int b;
	int c;

	a = 5;
	b = 0;
	c = -1;

	printf("%d\n", ft_iterative_factorial(a));
	printf("%d\n", ft_iterative_factorial(b));
	printf("%d\n", ft_iterative_factorial(c));
	return 0;
}
	
