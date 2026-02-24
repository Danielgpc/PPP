// Exercise 3.15 (page 81)

#include "PPPheaders.h"

int main()
{
    vector<int> v;
    int i = 0;
    while (cin>>i)
    {
        v.push_back(i);
    }

    vector<int> passed;
    int b_num = 0;
    int b_quant = 0;
    
    for (int num : v)
    {
        bool b;
        for (int j : passed)
        {
            if (num == j)
            {
                b = false;
            }
        }
        if (!(b)) continue;

        int i =0;
        for (int j : v)
        {
            if (j == num) i++;
        }

        if (i > b_quant)
        {
            b_num = num;
            b_quant = i;
        }

        passed.push_back(num);
    }

    cout << "The mode is: " << b_num << " and it appeared " << b_quant << " times." << '\n';
}