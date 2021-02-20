#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int 		main(void)
{
	int i;
	int j;
	int *k;
	int *l;

	i = 10;
	j = 3;
	k = &i;
	l = &j;
	ft_div_mod(i, j, k, l);
	printf("div=%d,mod=%d\n",*k, *l);
}
