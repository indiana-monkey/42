#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int i;
	int j;

	i = 15;
	j =	6;

	ft_ultimate_div_mod(&i, &j);
	printf("%i\n", i);
	printf("%i\n", j);
}
