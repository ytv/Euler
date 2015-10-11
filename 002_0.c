/**
 *Euler #002 - By considering the terms in the Fibonacci sequence whose values
 *do not exceed four million, find the sum of the even-valued terms
 *
 *ytv
 *
 */
 
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x = 1;
    int y = 2;
    int t = 0;
    int sum = 2;
    
    while(t < 4000000)
    {
        t = x + y;
        x = y;
        y = t;
        
        if(t%2 == 0)
        {
            sum += t;
        }
    }
    
    printf("%i\n", sum);
    
    return 0;
}

