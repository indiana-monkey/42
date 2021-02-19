/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:08:00 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/02/04 17:16:09 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char i[30] = "abcde";
	char *p = i;

	printf("%s\n", p);
	printf("%u\n", ft_strlcat(p, "hoge", 2));
	return 0;
}

