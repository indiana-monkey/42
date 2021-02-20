#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char str1[20] = "namakemono";
	char str2[20] = "inutaro";

	printf("%s\n", str1);
	ft_strncpy(str1, str2, 20);
	printf("%s\n", str1);
	return 0;
}
