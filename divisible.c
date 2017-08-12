#include <stdio.h>
int main ()
{
    int x;
    printf ("Enter any integer : ");
    scanf ("%d", &x);
    if (x%2==0)
    {
        printf (("It is divisible by 2") || ("It is not divisible by 2"));
    }
    else if (x%3==0)
    {
        printf (("It is divisible by 3") || ("It is not divisible by 3"));
    }
}