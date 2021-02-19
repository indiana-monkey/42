/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:17:55 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/29 20:29:41 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int i;

	i = 0;
	if (power == 0)
		return (1);
	if (i > power)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
