#include "ft.h"
#include <stdio.h>

int main(void)
{
	    char    c = 'a';
		int     a = 0;
		int     b = 100;
		char    *str = "hello";
		char    *tar = "i";
		ft_putchar(c);
		printf("\n");
		printf("a: %d b: %d\n", a, b);
		ft_swap(&a, &b);
		printf("a: %d b: %d\n", a, b);
		ft_putstr(str);
		printf("\n");
		printf("str:\"%s\" strlen: %d\n", str, ft_strlen(str));													
		printf("(pre:-1)strcmp: %d\n", ft_strcmp(str, tar));
		return(0);
}
