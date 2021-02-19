/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 14:50:51 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/29 20:19:45 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (nb >= i * i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
