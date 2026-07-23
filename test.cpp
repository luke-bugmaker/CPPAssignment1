#include <iostream>
#include <iomanip>
using namespace std;

void printGrid(int** grid, int width, int height) {
    cout << "  ";
    for (int x = -1; x <= width; x++) cout << "# ";
    cout << endl;

    for (int y = height - 1; y >= 0; y--) {
        cout << setw(2) << y << " #";
        for (int x = -1; x <= width; x++) {
            if (x == -1 || x == width) {
                cout << "#";
            } else if (grid[x][y] == 0) {
                cout << "  ";
            } else {
                cout << grid[x][y] << " ";
            }
        }
        cout << endl;
    }

    cout << "  ";
    for (int x = -1; x <= width; x++) cout << "# ";
    cout << endl;

    cout << "   ";
    for (int x = 0; x < width; x++) cout << x << " ";
    cout << endl;
}

int main() {
    int width = 9, height = 9;

    // build a real grid to test with
    int** grid = new int*[width];
    for (int x = 0; x < width; x++) {
        grid[x] = new int[height];
        for (int y = 0; y < height; y++) grid[x][y] = 0;   // init all to "empty"
    }

    // put a couple of test values in, like your screenshot
    grid[2][7] = 2; grid[3][7] = 2;
    grid[2][8] = 2; grid[3][8] = 2;

    printGrid(grid, width, height);

    // cleanup
    for (int x = 0; x < width; x++) delete[] grid[x];
    delete[] grid;

    return 0;
}