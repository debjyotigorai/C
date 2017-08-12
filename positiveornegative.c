#include <stdio.h>
#include <math.h>

int main ()

{
	float a;
	printf ("Enter a number :");
	scanf ("%f", &a);
	if (a>0)
	{
		printf ("The number is positive");
	}
	else if (a==0)
	{
		printf ("The number is zero");
	}
	else
	{
		printf ("The number is negative");
	}
	return 0;
}
