#include<stdio.h>
#include<conio.h>

main ()
{
	
	int x=0;
	int max=0;
	
	for (int i = 1; i <= 5; i++)
	{
		printf("%d.Please enter a number: ",i);
		scanf("%d",&x);
		if (x>max)
			max=x;
	}
		printf("max. number %d;", max);
getch();
}

