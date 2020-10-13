#include <stdio.h>

int n=6, k=4;
int bao[4];
int *ptr = bao;

int generate(int *ptr)
{
	for(int i=0; i<k; i++)
	{
		scanf("%d", ptr+i);		
	}	
	
	
	int idx = k-1;

	for(int y=0; y<k; y++)
		{
			printf("%d", *(ptr+y));			
		}
		printf("\n");	

	while(idx >= 0)
	{	
		if(*(ptr+idx) < n)
		{
			*(ptr+idx) += 1;
			for(int y=0; y<k; y++)
			{
				printf("%d", *(ptr+y));			
			}
			printf("\n");		
		}
		else
		{
			idx -= 1; 
			n -= 1;
		}		
	}
}
void main()
{
	int pt;
	//enter by each of element splitted by enter
	//make sure the array increasing to right-most element and not exceeding n 
	printf("enter your initial array= ");

	generate(&pt);
	
}





