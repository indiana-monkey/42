#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int	main(void)
{
	char str[] = "Hello";
	
	ft_strlen(str);
	printf("%d\n", ft_strlen(str));
	return(0);
}
