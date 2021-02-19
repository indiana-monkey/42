/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:15:02 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/02/05 11:08:40 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char str1[] = "abcdefgh";
	char *p;

	p = ft_strstr(str1, "def");
	printf("%s\n", p);

	return 0;
}

