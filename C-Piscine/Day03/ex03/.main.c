/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 12:23:59 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/24 00:21:05 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int 		main(void)
{
	int i;
	int j;
	int *k;
	int *l;

	i = 10;
	j = 3;
	k = &i;
	l = &j;
	ft_div_mod(i, j, k, l);
	printf("div=%d,mod=%d\n",*k, *l);
}
