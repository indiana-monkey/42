#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strlen(char test[]);

char	*ft_strdup(char *src);	

int		main(void)
{
	char *box;
	char str[] = "Hello";

	box = ft_strdup(str);
	printf("%s\n", box);
	return (0);
}
