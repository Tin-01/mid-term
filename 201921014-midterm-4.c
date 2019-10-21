#include <stdio.h>

int main()
{

	int i, num = 0, j = 1;
	printf("Enter the number: ");
	scanf("%d", &num );

	for(i=1; i<num; i++) //GDB : list, r, b 12, c, b 6, p i, p num, p j 
		j = j*i;

	printf("The factorial of %d is %d\n", num, j);

}
