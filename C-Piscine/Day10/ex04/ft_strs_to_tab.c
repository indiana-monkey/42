#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int						ft_strlen(char *zzz)
{
	int			i;

	i = 0;
	while (zzz[i] != '\0')
		i++;
	return (i);
}

char					*ft_strdup(char *xxx)
{
	char		*yyy;
	int			j;
	int			k;

	k = ft_strlen(xxx) + 1;
	yyy = malloc(sizeof(char) * k);
	if (yyy == NULL)
		return (NULL);
	j = 0;
	while (xxx[j] != '\0')
	{
		yyy[j] = xxx[j];
		j++;
	}
	yyy[j] = '\0';
	return (yyy);
}

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tmp;
	int			a;

	if (ac < 0)
		return (0);
	tmp = malloc((sizeof(t_stock_str)) * (ac + 1));
	if (tmp == NULL)
		return (NULL);
	while (a < ac && av[a] != 0)
	{
		tmp[a].size = ft_strlen(av[a]);
		tmp[a].str = av[a];
		tmp[a].copy = ft_strdup(av[a]);
		a++;
	}
	tmp[ac].size = 0;
	tmp[ac].str = 0;
	tmp[ac].copy = 0;
	return (tmp);
}
