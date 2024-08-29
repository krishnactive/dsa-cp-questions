#include <iostream>
using namespace std;

// Chessboard dimensions
const int BOARD_SIZE = 8;

// Chessboard represented as a 2D array
char chessBoard[BOARD_SIZE][BOARD_SIZE];

// Function to initialize the chessboard
void InitializeBoard()
{
    // Set all squares to empty
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            chessBoard[i][j] = '-';
        }
    }
}

// Function to display the chessboard
void DisplayBoard()
{
    // Display column numbers
    cout << "  ";
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;

    // Display row numbers and board contents
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        cout << i + 1 << " ";
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            cout << chessBoard[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Initialize the chessboard
    InitializeBoard();

    // Display the initial chessboard
    DisplayBoard();

    // Game loop
    while (true)
    {
        int sourceRow, sourceCol, destRow, destCol;
        cout << "Enter source position (row col): ";
        cin >> sourceRow >> sourceCol;
        cout << "Enter destination position (row col): ";
        cin >> destRow >> destCol;

        // TODO: Validate input and implement chess rules for moving pieces

        // Update the chessboard
        chessBoard[destRow - 1][destCol - 1] = chessBoard[sourceRow - 1][sourceCol - 1];
        chessBoard[sourceRow - 1][sourceCol - 1] = '-';

        // Display the updated chessboard
        DisplayBoard();
    }

    return 0;
}





