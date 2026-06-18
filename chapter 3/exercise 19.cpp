// Exercise 3.19 (page 81)

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
        string query;
        cout << "Enter a name to find its score (or quit): ";
        cin >> query;
        if (query == "quit")
            break;

        bool found = false;
        for (int i = 0; i < names.size(); ++i)
        {
            if (names[i] == query)
            {
                cout << query << " has score " << scores[i] << '\n';
                found = true;
                break;
            }
        }

        if (!found)
            cout << "name not found\n";
    }
}
