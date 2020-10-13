#include <stdio.h>

void swap(int *m, int *n)
{
	int r;
	r = *m;
	*m = *n;
	*n = r;
}

main()
{
	int x,y;

	printf("enter first number= ");
	scanf("%d", &x);
	printf("enter second number= ");
	scanf("%d", &y);

	printf("first order - x: %d, y: %d \n", x, y);

	swap(&x, &y);

	printf("second order - x: %d, y:%d \n", x, y );

	return 0;
}