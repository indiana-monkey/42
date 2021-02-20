#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
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
	return (nb * ft_recursive_factorial(nb - 1));
}
