#include <unistd.h>
#include <stdio.h>

void		ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int *********a;
	int ********b;
	int *******c;
	int ******d;
	int *****e;
	int ****f;
	int ***g;
	int **h;
	int *i;
	int j = 123;

	i = &j;
	h = &i;	
	g = &h;
	f = &g;
	e = &f;
	d = &e;
	c = &d;
	b = &c;
	a = &b;
	printf("%d\n", j);
	ft_ultimate_ft(a);
	printf("%d\n", j);
	return (0);
}
