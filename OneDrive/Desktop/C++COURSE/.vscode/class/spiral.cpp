#include <iostream>
using namespace std;

// Function to draw a spiral pattern
void DrawSpiral(int n)
{
    int rowStart = 0; // Starting row index
    int rowEnd = n - 1; // Ending row index
    int colStart = 0; // Starting column index
    int colEnd = n - 1; // Ending column index
    char pattern = '*'; // Pattern character

    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        // Print top row
        for (int i = colStart; i <= colEnd; i++)
        {
            cout << pattern << " ";
        }
        rowStart++;

        // Print right column
        for (int i = rowStart; i <= rowEnd; i++)
        {
            cout << pattern << " ";
        }
        colEnd--;

        // Print bottom row
        if (rowStart <= rowEnd)
        {
            for (int i = colEnd; i >= colStart; i--)
            {
                cout << pattern << " ";
            }
            rowEnd--;
        }

        // Print left column
        if (colStart <= colEnd)
        {
            for (int i = rowEnd; i >= rowStart; i--)
            {
                cout << pattern << " ";
            }
            colStart++;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the spiral: ";
    cin >> n;

    cout << "Spiral pattern:" << endl;
    DrawSpiral(n);

    return 0;
}
