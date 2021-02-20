#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (1 < nb)
	{
		i = i * (nb - 1);
		nb--;
	}
	return (i);
}
