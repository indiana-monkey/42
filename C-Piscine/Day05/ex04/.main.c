#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char str1[] = "abcdefgh";
	char *p;

	p = ft_strstr(str1, "def");
	printf("%s\n", p);

	return 0;
}

