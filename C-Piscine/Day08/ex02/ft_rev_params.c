#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int a;

	a = argc - 1;
	while (a > 0)
	{
		ft_putstr(argv[a]);
		(void)argc;
		ft_putchar('\n');
		a--;
	}
	return (0);
}
