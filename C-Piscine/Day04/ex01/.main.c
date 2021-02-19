/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:58:20 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/27 12:49:46 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char str1[20] = "namakemono";
	char str2[20] = "inutaro";

	printf("%s\n", str1);
	ft_strncpy(str1, str2, 20);
	printf("%s\n", str1);
	return 0;
}
