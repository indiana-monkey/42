#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int *ran;
	int min = 8;
	int max = 20;

	printf("%d\n", ft_ultimate_range(&ran, min, max));

	int i = 0;
	while (i < max - min)
	{
		printf("%d\n", ran[i]);
		i++;
	}
	return (0);
}
