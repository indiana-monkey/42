/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:25:20 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/02/03 13:16:25 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int main(void)
{
	int *j; 
	int  l = 1;
	int  m = 10;

	j = ft_range(l, m);
	
	int i = 0;
	
	while (i < (m-1))
	{
		printf("%d\n", j[i]);
		i++;
	}
	return (0);
}
 

