/* To find whether the year is leap year or not */

#include <stdio.h>
int main ()

{
    int x;
    printf ("Enter any year : ");
    scanf ("%d", &x);
    if (x%4==0)
    {
        printf ("This is a leap year");
    }
    else 
    {
        printf ("This is not a leap year");
    }
}