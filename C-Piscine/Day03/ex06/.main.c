/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 23:23:58 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/01/25 00:07:37 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int	main(void)
{
	char str[] = "Hello";
	
	ft_strlen(str);
	printf("%d\n", ft_strlen(str));
	return(0);
}
