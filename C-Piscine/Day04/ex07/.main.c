#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char str1[] = "Hello";
	ft_strupcase(str1);

	printf("%s\n", str1);
	return 0;
}
