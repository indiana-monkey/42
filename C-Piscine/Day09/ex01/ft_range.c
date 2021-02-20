#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int a;
	int b;
	int *array;

	if (min >= max)
		return (NULL);
	array = malloc((sizeof(int)) * (max - min));
	a = min;
	b = 0;
	while (a < max)
	{
		array[b] = a;
		a++;
		b++;
	}
	return (array);
}
