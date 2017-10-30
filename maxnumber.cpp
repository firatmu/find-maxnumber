#include<stdio.h>
#include<conio.h>

main ()
{
	
	int y=0;
	int max=0;
	
	for (int i = 1; i <= 10; i++)
	{
		printf("%d.Please enter a number: ",i);
		scanf("%d",&y);
		if (y>max)
			max=y;
	}
		printf("max. number is %d;", max);
getch();
}

