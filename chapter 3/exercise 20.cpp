// Exercise 3.20 (page 81)

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

    while (true)
    {
        int query;
        cout << "Enter a score to find all matching names (or -1 to quit): ";
        cin >> query;
        if (query == -1)
            break;

        bool found = false;
        for (int i = 0; i < names.size(); ++i)
        {
            if (scores[i] == query)
            {
                cout << names[i] << '\n';
                found = true;
            }
        }

        if (!found)
            cout << "score not found\n";
    }
}
