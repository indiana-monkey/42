/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:25:20 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/02/03 13:16:51 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int a;
	int b;
	int *array;

	if (min >= max)
		return (NULL);
	array = malloc((sizeof(int)) * (max - min));
	a = min;
	b = 0;
	while (a < max)
	{
		array[b] = a;
		a++;
		b++;
	}
	return (array);
}
