// Exercise 11 (page 80)

#include "PPPheaders.h"

int main()
{
    vector<char> v = {'r', 's', 'p', 's', 'p', 'r', 'r', 'p', 's'};

    char p = ' ';
    char c = ' ';
    int i = 0;

    while (true)
    {
        cout << "Player choose  : ";
        cin >> p;

        if (i == v.size())
        {
            i = 0;
            c = v[i];
        } else
        {
            c = v[i];
        }

        if (p != 'r' && p != 's' && p != 'p')
        {
            cout << "Invalid input" << '\n';
            return 1;
        }

        cout << "Computer choose: " << c << '\n';

        if (p==c)
        {
            cout << "Tie!" << '\n';
            i++;
            continue;
        }

        switch (c)
        {
        case 'r':
            if (p=='p')
            {
                cout << "The player won!" << '\n';
            } else
            {
                cout << "The computer won!" << '\n';
            }
            break;
        case 'p':
            if (p=='s')
            {
                cout << "The player won!" << '\n';
            } else
            {
                cout << "The computer won!" << '\n';
            }
            break;
        case 's':
            if (p=='r')
            {
                cout << "The player won!" << '\n';
            } else
            {
                cout << "The computer won!" << '\n';
            }
            break;
        }
        i++;
    }
}