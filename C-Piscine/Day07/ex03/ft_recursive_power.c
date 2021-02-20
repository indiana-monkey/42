#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int i;

	i = 0;
	if (power == 0)
		return (1);
	if (i > power)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
