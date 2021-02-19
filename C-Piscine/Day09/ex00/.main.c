/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsumu <ymatsumu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 21:33:38 by ymatsumu          #+#    #+#             */
/*   Updated: 2021/02/02 19:23:40 by ymatsumu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strlen(char test[]);

char	*ft_strdup(char *src);	

int		main(void)
{
	char *box;
	char str[] = "Hello";

	box = ft_strdup(str);
	printf("%s\n", box);
	return (0);
}
