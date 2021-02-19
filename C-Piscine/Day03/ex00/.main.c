#include <stdio.h>

void    ft_ft(int *nbr);

int     main(void)
{
	    int i;
		int *ptr;

		i = 4;
		ptr = &i;
		printf("%i\n", i);
		printf("%p\n", ptr);
		ft_ft(ptr);
		printf("%i\n", i);
		printf("%p\n", ptr);
}
