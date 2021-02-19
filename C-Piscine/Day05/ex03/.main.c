/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:17:30 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/28 22:28:58 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{	
	char str1[127] = "ab";
	char str2[127] = "abc";
	char str3[127] = "ab";
	char str4[127] = "abc";
	
	printf("%s\n", strncat(str1, str2, 2));
	printf("%s\n", ft_strncat(str3, str4, 2));
	return 0;
}
