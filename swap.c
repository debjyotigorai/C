#include <stdio.h>
int main ()

{
	int x, y, temp;
	printf ("Enter any number X : ");
	scanf ("%d", &x);
	printf ("Enter any number Y : ");
	scanf ("%d", &y);
	
	temp = x;
	x = y;
	y = temp;
	printf ("value X = %d\n",x);
	printf ("value Y = %d",y);
	
}