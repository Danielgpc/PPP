// Exercise 3.17 (page 81)

#include "PPPheaders.h"
#include <cmath>

int main()
{
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (a == 0)
    {
        cout << "This is not a quadratic equation.\n";
        return 0;
    }

    if (discriminant < 0)
    {
        cout << "No real solutions.\n";
    }
    else if (discriminant == 0)
    {
        double x = -b / (2 * a);
        cout << "x = " << x << '\n';
    }
    else
    {
        double sqrt_discriminant = sqrt(discriminant);
        double x1 = (-b + sqrt_discriminant) / (2 * a);
        double x2 = (-b - sqrt_discriminant) / (2 * a);
        cout << "x1 = " << x1 << '\n';
        cout << "x2 = " << x2 << '\n';
    }
}
