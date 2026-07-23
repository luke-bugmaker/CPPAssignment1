for (int y = height -1; y >= 0; y--) {
    cout << setw(2) << y;
    for (int x = -1; x <= width; x++) {
        if (x == -1 || x == width) {
            cout << "#";
        } else if (grid[x][y] == 0) {
            cout << " ";
        } else {
        cout << grid[x][y];
    }
    }
    cout << endl;
}