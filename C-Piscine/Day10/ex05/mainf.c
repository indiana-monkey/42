#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int		ft_strlen(char *zzz);

char	*ft_strdup(char *xxx);

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

int		 main(int argc, char **argv)
{
	t_stock_str	*t;
	int i;

	i = 0;
	t = ft_strs_to_tab(argc, argv);
	while (i < argc)
	{
		printf("%d\n", t[i].size);
		printf("%s\n", t[i].str);
		printf("%s\n", t[i].copy);
		i++;
	}
	return (0);
}

