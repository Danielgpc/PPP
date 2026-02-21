// Exercise 3.14 (page 81)

#include "PPPheaders.h"

int main()
{
    cout << "Enter the number: ";
    int n;
    cin >> n;
    
    vector<int> primes;
    primes.push_back(2);

    for (int i = 3; i < n + 1; i++)
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
}