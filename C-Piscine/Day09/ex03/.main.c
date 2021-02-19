#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int	argc, char **argv)
{
	char *str;
	char *sep = "~~~";

	str = ft_strjoin(argc-1, &argv[1], ",");
	printf("%s\n", str);
	str = ft_strjoin(argc-1, &argv[1], sep);
	printf("%s\n",str);
	return(0);
}
