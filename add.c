#include <stdio.h>
int main ()

{
    int a, b, c;
    printf ("Enter two numbers to add\n");
    scanf ("%d%d", &a, &b);
    
    c=a+b;
    
    printf ("The sum is : %d", c);
    return 0;
}