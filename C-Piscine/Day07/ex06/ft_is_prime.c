/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:03:04 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/30 12:18:59 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int ab)
{
	long int i;

	i = 2;
	if (ab < 2)
		return (0);
	if (ab == 2 || ab == 3)
		return (1);
	while (i * i <= ab)
	{
		if (ab % 2 == 0 || ab % i == 0)
			return (0);
		i++;
	}
	return (1);
}
