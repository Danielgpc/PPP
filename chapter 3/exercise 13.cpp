// Exercise 3.13 (page 80)

#include "PPPheaders.h"

vector<int> sieveOfEratosthenes(int max);

int main()
{
    vector<int> primes = sieveOfEratosthenes(100);

    cout << "All prime numbers: " << '\n';
    for (int prime : primes)
    {
        cout << '\t' << prime << '\n';
    }
    
}

vector<int> sieveOfEratosthenes(int max)
{
    vector<int> primes;
    vector<int> nums;
    
    for (int i = 2; i < max; i++)
    {
        nums.push_back(i);
    }

    while (nums.size() != 0)
    {
        if (primes.size() == 0)
        {
            primes.push_back(nums[0]);
            nums.erase(nums.begin());
        } else
        {
            for (int i = 0; i < primes.size(); i++)
            {
                int prime = primes[i];
                if (nums[0] % prime == 0)
                {
                    nums.erase(nums.begin());
                    break;
                } else if (i == primes.size() - 1 && nums[0] % prime != 0) {
                    primes.push_back(nums[0]);
                    nums.erase(nums.begin());
                    break;
                }
            }
        }
    }
    
    return primes;
}
