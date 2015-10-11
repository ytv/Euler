/**
 *Euler #003 - What is the largest prime factor of the number 600851475143?
 *
 *ytv
 *
 */
 
#include <stdio.h>

#define N   600851475143

int main()
{
    long long int n = N;
    int i = 2;
    
    while(i < n)
    {
        while(n%i == 0)
        {
            n = n/i;
            
        }
        i++;
    }
    
    printf("%lli\n", n);

    return 0;
}
