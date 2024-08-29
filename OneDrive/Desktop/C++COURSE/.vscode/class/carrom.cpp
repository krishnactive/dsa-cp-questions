#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int BOARD_SIZE = 5; // Size of the carrom board

char board[BOARD_SIZE][BOARD_SIZE]; // Carrom board

int strikerX, strikerY; // Position of the striker
int coinX, coinY; // Position of the coin
int score; // Player's score

// Initialize the carrom board
void InitializeBoard()
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            if (i == 0 || i == BOARD_SIZE - 1 || j == 0 || j == BOARD_SIZE - 1)
                board[i][j] = '#'; // Boundary of the board
            else
                board[i][j] = ' '; // Empty space on the board
        }
    }
}

// Place the striker on the board
void PlaceStriker()
{
    strikerX = BOARD_SIZE / 2;
    strikerY = BOARD_SIZE - 2;
    board[strikerY][strikerX] = 'S'; // S represents the striker on the board
}

// Place the coin on the board
void PlaceCoin()
{
    coinX = rand() % (BOARD_SIZE - 2) + 1; // Random X position for the coin
    coinY = 1; // Fixed Y position for the coin
    board[coinY][coinX] = 'C'; // C represents the coin on the board
}

// Draw the carrom board
void DrawBoard()
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Score: " << score << endl;
}

// Move the striker
void MoveStriker(char direction)
{
    // Clear the current position of the striker
    board[strikerY][strikerX] = ' ';

    // Move the striker based on the input direction
    switch (direction)
    {
        case 'a': // Move left
            strikerX--;
            break;
        case 'd': // Move right
            strikerX++;
            break;
        case 'w': // Move up
            strikerY--;
            break;
        case 's': // Move down
            strikerY++;
            break;
    }

    // Place the striker on the new position
    board[strikerY][strikerX] = 'S';
}

// Check if the striker is in a valid position
bool IsValidPosition(int x, int y)
{
    if (x > 0 && x < BOARD_SIZE - 1 && y > 0 && y < BOARD_SIZE - 1)
        return true;
    else
        return false;
}

// Check if the striker has hit the coin
bool IsCoinHit()
{
    if (strikerX == coinX && strikerY == coinY)
        return true;
    else
        return false;
}

// Update the game state
void UpdateGame()
{
    if (IsCoinHit())
    {
        score++;
        PlaceCoin();
    }
}

int main()
{
    srand(time(0)); // Seed the random number generator

    InitializeBoard();
    PlaceStriker();
    PlaceCoin();

    char input;

    while (true)
    {
        system("cls"); // Clear the console
        DrawBoard();

        cout << "Enter move (w/a/s/d to move, q to quit): ";
        cin >> input;

        if (input == 'q' || input == 'Q')
        {
            cout << "Quitting the game..." << endl;
            break;
        }

        // Move the striker based on the input
        MoveStriker(input);

        // Check if the striker is in a valid position
        if (!IsValidPosition(strikerX, strikerY))
        {
            cout << "Invalid move! Try again." << endl;
            MoveStriker(input); // Move the striker back to the previous position
        }

        // Update the game state
        UpdateGame();
    }

    return 0;
}
