// Exercise 3.16 (page 81)

#include "PPPheaders.h"

int main()
{
    vector<string> v;
    string s;
    while (cin >> s)
        v.push_back(s);

    if (v.empty())
        return 0;

    string min = v[0];
    string max = v[0];
    for (string word : v)
    {
        if (word < min) min = word;
        if (word > max) max = word;
    }

    string mode;
    int mode_count = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        int count = 0;
        for (int j = 0; j < v.size(); ++j)
            if (v[i] == v[j])
                ++count;

        if (count > mode_count)
        {
            mode = v[i];
            mode_count = count;
        }
    }

    cout << "Minimum: " << min << '\n';
    cout << "Maximum: " << max << '\n';
    cout << "Mode:    " << mode << " (appears " << mode_count << " times)" << '\n';
}