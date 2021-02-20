#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{	
	char str1[127] = "ab";
	char str2[127] = "abc";
	char str3[127] = "ab";
	char str4[127] = "abc";
	
	printf("%s\n", strncat(str1, str2, 2));
	printf("%s\n", ft_strncat(str3, str4, 2));
	return 0;
}
