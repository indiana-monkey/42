/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:01:41 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/26 09:29:37 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	    char test1[] = "hello";
		char test2[] = "Hello";
		char test3[] = "h12lo";
		char test4[] = "";

				ft_str_is_lowercase(test1);
				ft_str_is_lowercase(test2);
				ft_str_is_lowercase(test3);
				ft_str_is_lowercase(test4);

				printf("%d\n", ft_str_is_lowercase(test1));
				printf("%d\n", ft_str_is_lowercase(test2));
				printf("%d\n", ft_str_is_lowercase(test3));
				printf("%d\n", ft_str_is_lowercase(test4));
				return 0;
}
