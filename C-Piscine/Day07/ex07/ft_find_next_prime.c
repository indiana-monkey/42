#include <unistd.h>
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	long int i;

	i = 2;
	if (nb <= 2)
		return (2);
	while (i * i <= nb)
	{
		if (nb % 2 == 0 || nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}
