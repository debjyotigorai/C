#include <stdio.h>
int main (void)

{
	int n;
	
		printf("Enter any number : ");
		scanf("%d", &n);
		
		if (n>=60)
		{
			printf("First Group");
		}	    
	   else if (n>=45)
	    {
	    	printf ("Second Group");
		}		
		else if (n>=35)
		{
			printf ("Third Group");
		}		
		else if (n<34)
		{
			printf ("Fourth Group");
		}
}
