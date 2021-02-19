/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:47:07 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/28 10:23:17 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char str1[] = "hello";
	char str2[] = "goodbye";

	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	printf("%lu\n", sizeof str2);
	return(0);
}
