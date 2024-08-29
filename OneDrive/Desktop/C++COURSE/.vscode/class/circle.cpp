#include <iostream>
#include <cmath>

using namespace std;

void DrawCircle(int radius)
{
    // Determine the center of the circle
    int centerX = radius;
    int centerY = radius;

    // Loop through each row and column of the console
    for (int row = 0; row <= 2 * radius; row++)
    {
        for (int col = 0; col <= 2 * radius; col++)
        {
            // Calculate the distance from the center of the circle
            int distance = sqrt(pow(col - centerX, 2) + pow(row - centerY, 2));

            // If the distance is close to the radius, draw the circle
            if (abs(distance - radius) < 0.5)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Call the DrawCircle function to draw the circle
    DrawCircle(radius);

    return 0;
}
