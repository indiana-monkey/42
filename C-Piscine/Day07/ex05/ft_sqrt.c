#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (nb >= i * i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
