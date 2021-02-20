#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char str1[] = "ab";
	char str2[] = "abc";
	char str3[] = "tokio";
	char str4[] = "tokyh";

	printf("%d\n", strncmp(str1, str2, 3));
	printf("%d\n", ft_strncmp(str3, str4, 4));
	return 0;
}



