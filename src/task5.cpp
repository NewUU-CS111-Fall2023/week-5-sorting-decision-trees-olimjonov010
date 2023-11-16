#include <vector>

using namespace std;

// Function to interpret and display the colors from the matrix
void displayColors(const vector<vector<char>>& matrix) {
    for (const auto& row : matrix) {
        for (char symbol : row) {
            switch (symbol) {
                case 'b':
                    cout << "\033[34m";  // Set text color to blue
                    break;
                case 'y':
                    cout << "\033[33m";  // Set text color to yellow
                    break;
                case 'w':
                    cout << "\033[37m";  // Set text color to white
                    break;
                default:
                    break;
            }
            cout << symbol << "\033[0m ";  // Reset text color after printing the symbol
        }
        cout << endl;
    }
}

int main() {
    // Example matrix of symbols
    vector<vector<char>> colorMatrix = {
        {'b', 'y', 'w', 'b'},
        {'y', 'w', 'b', 'y'},
        {'w', 'b', 'y', 'w'},
        {'b', 'y', 'w', 'b'}
    };

    // Display the visual representation of colors
    displayColors(colorMatrix);

    return 0;
}
