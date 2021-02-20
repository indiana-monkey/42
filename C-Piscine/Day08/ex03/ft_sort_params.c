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

int		ft_strcmp(char *argv1, char *argv2)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (argv1[a] != '\0')
	{
		if (argv1[a] != argv2[a])
			return (argv1[a] - argv2[a]);
		a++;
	}
	if (argv1[a] == '\0')
		b = -argv2[a];
	return (b);
}

void	ft_bubble_sort(int argc, char **argv)
{
	int		b;
	int		a;
	char	*tmp;

	b = 1;
	while (b < argc)
	{
		a = 1;
		while (a < argc - b)
		{
			if (ft_strcmp(argv[a], argv[a + 1]) > 0)
			{
				tmp = argv[a];
				argv[a] = argv[a + 1];
				argv[a + 1] = tmp;
			}
			a++;
		}
		b++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	ft_bubble_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		(void)argc;
		ft_putchar('\n');
		i++;
	}
	return (0);
}
