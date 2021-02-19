/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 11:22:06 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/29 20:11:14 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_iterative_power(int nb, int power)
{
	int num;
	int i;

	num = 1;
	i = 0;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (i > power)
	{
		return (0);
	}
	while (i < power)
	{
		num = num * nb;
		i++;
	}
	return (num);
}
