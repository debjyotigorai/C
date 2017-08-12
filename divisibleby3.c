/* To find whether the number is divisible by 3 or not */
#include <stdio.h>
int main ()

{
	int x;
	printf ("Enter any Number : ");
	scanf ("%d", &x);
	if(x%3==0)
	{
		printf ("It is divisible by 3");
	}
	else
	{
		printf ("It is not divisible by 3");
	}
}
