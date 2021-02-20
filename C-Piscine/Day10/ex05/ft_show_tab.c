#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print(char str[])
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}

void	ft_putnbr(int size)
{
	long int i;

	i = size;
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_print(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_print(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
