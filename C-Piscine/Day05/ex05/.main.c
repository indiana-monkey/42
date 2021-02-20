#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char i[30] = "abcde";
	char *p = i;

	printf("%s\n", p);
	printf("%u\n", ft_strlcat(p, "hoge", 2));
	return 0;
}

