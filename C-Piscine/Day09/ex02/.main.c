#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int *range;
	    int *range1;
		int output;
		    int output1;

			output = ft_ultimate_range(&range, 1, 240000000);
			printf("Output = %d\n",output);
			if (output == -1)
				printf("-1");
			if(!range)
			{
				printf("NULL.\n");
				return (0);
			}
			    output1 = ft_ultimate_range(&range1, 5, 5);
				printf("output1 = %d\n",output1);
				if (!range1)
				{
					printf("NULL.\n");
					return (0);
				}
				for (int i = 0; i < output1; i++)
				{
					printf("%d", range1[i]);
					        printf("%d", output);
				}
				return (0);
}
