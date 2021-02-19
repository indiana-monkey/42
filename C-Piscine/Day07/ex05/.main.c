/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 14:50:51 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/29 20:19:02 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
	int a;
	int b;

	a = 1;
	b = 12;
	printf("%d\n", ft_sqrt(a));
	printf("%d\n", ft_sqrt(b));
	return 0;
}
