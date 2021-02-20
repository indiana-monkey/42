#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char str1[20] = "namakemono";
	char str2[20] = "pokemon";
	char str3[20] = "namakemono";
    char str4[20] = "pokemon";
	int size1 = 2;
	int size2 = 2;

	strlcpy(str1, str2, size1);
	printf("%s\n", str1);	
	printf("%s\n", str2);
	printf("%d\n", size1);

	ft_strlcpy(str3, str4, size2);
	printf("%s\n",str3);
	printf("%s\n", str4); 
	printf("%d\n", size2);
	return 0;
}
