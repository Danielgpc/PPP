// Exercise 3.18 (page 81)

#include "PPPheaders.h"

int main()
{
    vector<string> names;
    vector<int> scores;

    while (true)
    {
        string name;
        int score;
        cout << "Enter a name and score (or NoName 0 to stop): ";
        cin >> name >> score;

        if (name == "NoName" && score == 0)
            break;

        for (string existing : names)
        {
            if (existing == name)
            {
                cout << "Error: duplicate name: " << name << '\n';
                return 1;
            }
        }

        names.push_back(name);
        scores.push_back(score);
    }

    for (int i = 0; i < names.size(); ++i)
        cout << names[i] << ' ' << scores[i] << '\n';
}
