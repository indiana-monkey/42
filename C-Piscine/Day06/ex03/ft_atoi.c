/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 19:37:45 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/30 14:03:30 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int i;
	int num;
	int pm;

	i = 0;
	num = 0;
	pm = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' ||
			str[i] == '\t' || str[i] == '\r' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pm = pm * -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		num = num * 10;
		num = num + (str[i] - '0');
		i++;
	}
	return (num * pm);
}
