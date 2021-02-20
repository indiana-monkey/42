#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int	*tab, int size);

int main(void)
{
	int tab[7] = {17,4,0,4,5,6,1};
	ft_sort_int_tab(tab, 7);
	int i = 0;
	while (i < 7)
	{
		printf("%d\n", tab[i]);
	i++;
	}
}
