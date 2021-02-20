#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;
	int x;

	i = 0;
	x = size - 1;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[x];
		tab[x] = tmp;
		i++;
		x--;
	}
}
