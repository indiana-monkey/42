#include <stdio.h>
#include <unistd.h>

int ft_str_is_printable(char *str);

int main(void)
{
	char only_alpha[2] = "ab";
	char whitespace[2] = " ";
	char newline[2] = "\n";
	char tab[2] = "\t";
	char null[2] = "\0";
	char empty[1] = "";

	ft_str_is_printable(only_alpha);
	ft_str_is_printable(whitespace);
	ft_str_is_printable(newline);
	ft_str_is_printable(tab);
	ft_str_is_printable(empty);
	printf("%d\n", ft_str_is_printable(only_alpha)); 
	printf("%d\n", ft_str_is_printable(whitespace)); 
	printf("%d\n", ft_str_is_printable(newline)); 
	printf("%d\n", ft_str_is_printable(tab));
	printf("%d\n", ft_str_is_printable(empty)); 	
	return 0;
}
