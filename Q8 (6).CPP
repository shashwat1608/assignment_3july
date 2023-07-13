#include <iostream>
#include <vector>

using namespace std;

bool checkStraightLine(vector<vector<int>>& coordinates) {
    if (coordinates.size() <= 2) {
        return true;
    }

    int x0 = coordinates[0][0];
    int y0 = coordinates[0][1];
    int x1 = coordinates[1][0];
    int y1 = coordinates[1][1];

    for (int i = 2; i < coordinates.size(); i++) {
        int x = coordinates[i][0];
        int y = coordinates[i][1];

        if ((y1 - y0) * (x - x0) != (y - y0) * (x1 - x0)) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cout << "Enter the number of points: ";
    cin >> n;

    vector<vector<int>> coordinates(n, vector<int>(2));
    cout << "Enter the coordinates of points:\n";
    for (int i = 0; i < n; i++) {
        cin >> coordinates[i][0] >> coordinates[i][1];
    }

    bool isStraight = checkStraightLine(coordinates);
    if (isStraight) {
        cout << "The points form a straight line.\n";
    } else {
        cout << "The points do not form a straight line.\n";
    }

    return 0;
}
