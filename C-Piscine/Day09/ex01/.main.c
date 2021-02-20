#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int main(void)
{
	int *j; 
	int  l = 1;
	int  m = 10;

	j = ft_range(l, m);
	
	int i = 0;
	
	while (i < (m-1))
	{
		printf("%d\n", j[i]);
		i++;
	}
	return (0);
}
 

