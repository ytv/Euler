/**
 *Euler #003 - What is the largest prime factor of the number 600851475143?
 *
 *ytv
 *
 */
 
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define N   600851475143

int main()
{
    long long int x = N;
    long long int p = 1;
    
    for(long long int i = 2; i <= x/2; i++)
    {
        // checks if i is a factor of x
        if(x%i == 0)
        {
            // if i is a factor of x, checks if i is a prime number
            bool prime = true;
            long long int j = 2;
            
            while(prime == true && j <= i/2)
            {
                if(i%j == 0)
                {
                    prime = false;
                }
                
                j++;
            }
            
            if(prime == true)
            {
                p = i;
            }
        }
    }
    
    printf("%lli\n", p);
    
    return 0;
}
