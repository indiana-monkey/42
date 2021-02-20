#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char str1[] = "hello";
	char str2[] = "goodbye";

	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	printf("%lu\n", sizeof str2);
	return(0);
}
