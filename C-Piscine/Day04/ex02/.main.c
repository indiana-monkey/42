/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:42:21 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/26 09:26:28 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
	char test1[] = "abcde";
	char test2[] = "skaA9";
	char test3[] = "";
	
	ft_str_is_alpha(test1);
	ft_str_is_alpha(test2);
	ft_str_is_alpha(test3);

	printf("%d\n", ft_str_is_alpha(test1));
	printf("%d\n", ft_str_is_alpha(test2));
	printf("%d\n", ft_str_is_alpha(test3));
	return 0;
}
