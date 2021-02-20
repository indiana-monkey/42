#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strlen(char test[])
{
	int f;

	f = 0;
	while (test[f] != '\0')
	{
		f++;
	}
	return (f);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((sizeof(char)) * (ft_strlen(src) + 1));
	if (str == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
