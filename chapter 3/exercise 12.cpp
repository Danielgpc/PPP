// Exercise 3.12 (page 80)

#include "PPPheaders.h"

int main()
{
    vector<int> primes;
    primes.push_back(2);

    for (int i = 3; i < 101; i++)
    {
        bool is_prime = true;
        for (int prime : primes)
        {
            if (i % prime == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            primes.push_back(i);
        }
    }

    cout << "All primes:" << '\n';

    for (int i = 0; i < primes.size(); i++)
    {
        cout << '\t' << primes[i] << '\n';
    }
    
    
    return 0;
}