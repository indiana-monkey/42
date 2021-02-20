#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int j;
	unsigned int k;
	unsigned int l;

	j = 0;
	k = 0;
	l = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[l] != '\0')
	{
		l++;
	}
	if (size <= j)
		return (size + l);
	while (src[k] != '\0' && k < size - j - 1)
	{
		dest[j + k] = src[k];
		k++;
	}
	dest[j + k] = '\0';
	return (j + l);
}
