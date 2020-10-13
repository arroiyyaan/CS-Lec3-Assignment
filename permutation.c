#include <stdio.h> 
#include <string.h> 

//swapping step
int swap(char* m, char*n)
{
	char x;
	x = *m;
	*m = *n;
	*n = x;
}

//outputting permutation series
int outpermut(char* a, int l, int r) 
{ 
	int i; 
	if (l == r) 
		printf("%s\n", a); 
	else { 
		for (i = l; i <= r; i++) { 
			swap((a + l), (a + i)); 
			outpermut(a, l + 1, r); 
			swap((a + l), (a + i)); 
		} 
	} 
} 


int main() 
{ 
	char str[] = "12345"; 
	int n = strlen(str); 
	outpermut(str, 0, n - 1); 
	
	return 0; 
} 
