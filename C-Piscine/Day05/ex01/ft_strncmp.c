#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				b;
	unsigned int	a;

	a = 0;
	b = 0;
	while (s1[a] != '\0' && n > a)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	if (s1[a] == '\0' && n > a)
	{
		b = -s2[a];
	}
	return (b);
}
