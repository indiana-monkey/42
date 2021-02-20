#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	char test1[] = "Hello";
	char test2[] = "12345";
	char test3[] = "H12lo";
	char test4[] = "";

	printf("%d\n", ft_str_is_numeric(test1));
	printf("%d\n", ft_str_is_numeric(test2));
	printf("%d\n", ft_str_is_numeric(test3));
	printf("%d\n", ft_str_is_numeric(test4));
	return 0;
}


