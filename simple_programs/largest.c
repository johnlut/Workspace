#include <stdio.h>
#include <stdlib.h>


int main()
{

    int a, b, c, max; 

    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d \n", a, b, c);
    
    if(a > b && a > c)
    {
        max = a; 
    }
    else if(b > a && b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    printf("max is: %d\n", max);


    return 0; 
}