#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_iterative_power(int nb, int power)
{
	int num;
	int i;

	num = 1;
	i = 0;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (i > power)
	{
		return (0);
	}
	while (i < power)
	{
		num = num * nb;
		i++;
	}
	return (num);
}
