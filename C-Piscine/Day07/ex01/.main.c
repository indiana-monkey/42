#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main()
{
	int a;
	
	a = 4;
	printf("%d\n", ft_recursive_factorial(a));
	return 0;
}
