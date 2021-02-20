#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char str1[10] = "abcd";
	char str2[10] = "efg";
	char str3[10] = "abcd";
	char str4[10] = "efg";

	strcat(str1, str2);
	ft_strcat(str3, str4);
	printf("%s\n", str1);
	printf("%s\n", str3);
	return 0;
}
