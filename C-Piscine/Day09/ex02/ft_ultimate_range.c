/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 20:30:16 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/02/03 15:42:34 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int a;
	int *array;

	a = 0;
	if (min >= max)
		return (NULL);
	array = malloc((sizeof(int)) * (max - min));
	while (min < max)
	{
		array[a] = min;
		min++;
		a++;
	}
	return (array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == 0)
		return (-1);
	return (max - min);
}
