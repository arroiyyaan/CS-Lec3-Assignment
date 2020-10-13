#include <stdio.h>

main()
{
	char option;

	int stdnumb;
	float l,w,p;
	float price, usd=1.00, eur=0.85, gbp=0.77; 
	float k,x,b;
	int i, n, f=1;
	float y,km, mile;

	printf("===choose program option===\n");
	printf("regular display = a\n");
	printf("shape perimeter = b\n");
	printf("currency conversion = c\n");
	printf("simple algebra = d\n");
	printf("factorial number & odd/even checking = e\n");
	printf("looped km to mile conversion = f\n");

	printf("your option = ");
	scanf("%c", &option);

	switch(option)
	{
		case 'a':
			printf("Nice! Now I really start coding...\n");
			printf("the number of student in the class= ");	
			scanf("%d", &stdnumb);
			printf("We have %d in the class\n", stdnumb);
			break;

		case 'b':
			printf("enter length = ");
			scanf("%f", &l);
			printf("enter width = ");
			scanf("%f", &w);
			p = 2*(l + w);
			printf("Rectangle Perimeter = %.2f \n", p);
			break;

		case 'c':
			printf("mention a  price in USD= ");
			scanf("%f", &price);
			printf("the price in EUR = %.4f\n", price*eur);
			printf("the EUR to GBP ratio = %.4f\n", eur/gbp);
			printf("the USD to GBP ratio = %.4f\n", usd/gbp);
			break;

		case 'd':
			printf("input k= ");
			scanf("%f", &k);
			printf("input b= ");
			scanf("%f", &b);
			printf("kx + b = %f\n", -b/k);
			break;

		case 'e':
			printf("Enter an int number = ");
			scanf("%d", &n);
			if(n%2 == 0)
				printf("%d is an even number \n", n);
			else
				printf("%d is an odd number \n", n);
			for(i=1; i<=n; i++)
				f = f*i;
				printf("%d factorial is = %d\n",n,f);
			break;

		case 'f':
			printf("Enter a value of p in km to convert = ");
			scanf("%f", &km);

			mile = 0.62*km;

			//if(km > 0)
			// {
			// for(int y=0; y=km; y++)
				// mile = y*0.6;
			printf("%.2f km is = %.2f \n",km,mile);			
			// }
			break;

		default:
			printf("No menu for such option !!!");


	}
	//task 1 - regular print
	/*int stdnumb;
	printf("Nice! Now I really start coding...\n");	
	scanf("%d", &stdnumb);
	printf("We have %d in the class\n", stdnumb);*/
	
	//task 2 - shape perimeter
	/*float l, w, p;
	printf("enter length = ");
	scanf("%f", &l);
	printf("enter width = ");
	scanf("%f", &w);
	p = 2*(l + w);
	printf("Rectangle Perimeter = %f \n", p);
	return 0; */

	//task 3 - currency conversion 
	/*float price, usd=1.00, eur=0.85, gbp=0.77;
	printf("mention a  price in USD= ");
	scanf("%f", &price);
	printf("the price in EUR = %f\n", price*eur);
	printf("the EUR to GBP ratio = %f\n", eur/gbp);
	printf("the USD to GBP ratio = %f\n", usd/gbp);*/

	//task 4 - simple algebra
	/*float k,x,b;
	printf("input k= ");
	scanf("%f", &k);
	printf("input b= ");
	scanf("%f", &b);
	printf("kx + b = %f\n", -b/k);*/
	
	//task 5 - factorial number and odd/even check 
	/*int i, n, f=1;
	printf("Enter an int number = ");
	scanf("%d", &n);
	if(n%2 == 0)
		printf("%d is an even number \n", n);
	else
		printf("%d is an odd number \n", n);
	for(i=1; i<=n; i++)
		f = f*i;
		printf("%d factorial is = %d\n",n,f);*/

	//task 6 - looped km to mile conversion 
	/*float i,p, mile;
	printf("Enter a value of p in km to convert = ");
	scanf("%f", &p);
	if(p > 0)
	{
	for(i=0; i=p; i++)
		mile = i*0.6;
		printf("%f km is = %f \n",p,mile);
	
	}*/ 
	
	
	return 0;
	
	
}

