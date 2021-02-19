/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:59:55 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/02/01 18:46:32 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int tab[7] = {8,2,3,5,2,7,9};
	ft_rev_int_tab(tab, 7);
	int i = 0;
	while (i < 7)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
