#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char str[] = "HELoo";
	ft_strlowcase(str);
	printf("%s\n", str);
	return 0;
}
