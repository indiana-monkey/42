/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:59:55 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/02/01 19:11:29 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;
	int x;

	i = 0;
	x = size - 1;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[x];
		tab[x] = tmp;
		i++;
		x--;
	}
}
