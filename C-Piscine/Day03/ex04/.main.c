/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:32:43 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/24 00:23:19 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int i;
	int j;

	i = 15;
	j =	6;

	ft_ultimate_div_mod(&i, &j);
	printf("%i\n", i);
	printf("%i\n", j);
}
