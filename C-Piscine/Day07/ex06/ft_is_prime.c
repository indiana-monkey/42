#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int ab)
{
	long int i;

	i = 2;
	if (ab < 2)
		return (0);
	if (ab == 2 || ab == 3)
		return (1);
	while (i * i <= ab)
	{
		if (ab % 2 == 0 || ab % i == 0)
			return (0);
		i++;
	}
	return (1);
}
