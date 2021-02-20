#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int main(void)
{
	char a[]="12 3";
	char b[]="-123ab";
	char c[]="  -123";
	char d[]="\t12\t34";
	char e[]="-++--123";
	char f[]="+ +123";
	
	printf("%d\n", ft_atoi(a));
	printf("%d\n", ft_atoi(b));
	printf("%d\n", ft_atoi(c));
	printf("%d\n", ft_atoi(d));
	printf("%d\n", ft_atoi(e));
	printf("%d\n", ft_atoi(f));
	return 0;
}
