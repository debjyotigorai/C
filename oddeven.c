/* To find whether the given number is odd or even*/
#include <stdio.h>
int main ()

{
    int x;
    printf ("Enter any number: ");
    scanf ("%d", &x);
    
    if (x%2==0)
    {
        printf ("It is an even number");
    }
    else
    {
        printf ("It is an odd number");
    }
}