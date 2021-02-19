/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:07:17 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/26 10:12:29 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	char test1[] = "HE2LO";
	char test2[] = "hello";
	char test3[] = "HELLO";
	char test4[] = "";

	ft_str_is_uppercase(test1);
	ft_str_is_uppercase(test2);
	ft_str_is_uppercase(test3);
	ft_str_is_uppercase(test4);

	printf("%d\n", ft_str_is_uppercase(test1));
	printf("%d\n", ft_str_is_uppercase(test2));
	printf("%d\n", ft_str_is_uppercase(test3));
	printf("%d\n", ft_str_is_uppercase(test4));
	return 0;
}
