#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (s1[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	if (s1[a] == '\0')
		b = -s2[a];
	return (b);
}
