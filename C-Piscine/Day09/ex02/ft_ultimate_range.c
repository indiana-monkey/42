#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int a;
	int *array;

	a = 0;
	if (min >= max)
		return (NULL);
	array = malloc((sizeof(int)) * (max - min));
	while (min < max)
	{
		array[a] = min;
		min++;
		a++;
	}
	return (array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == 0)
		return (-1);
	return (max - min);
}
