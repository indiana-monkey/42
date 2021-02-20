#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	char str1[] = "abcde";
	char str2[] = "abcdefg"; 
	char str3[] = "abcde";
	char str4[] = "abcdefg";

	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str3, str4));
	return 0;
}

