/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 10:51:57 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/02/01 18:17:27 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int	*tab, int size);

int main(void)
{
	int tab[7] = {17,4,0,4,5,6,1};
	ft_sort_int_tab(tab, 7);
	int i = 0;
	while (i < 7)
	{
		printf("%d\n", tab[i]);
	i++;
	}
}
