#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

typedef enum { FWD, REV } dir;

int diag_sum(int dimenz, int dir, vector<vector<int>> vec)
{
    int sum{0};
    for (int i = 0; i < dimenz; i++) {
        if (dir == FWD) {
            // cout << vec[i][i] << endl;
            sum += vec[i][i];
        }
        else {
            // cout << vec[dimenz-(i+1)][i] << endl;
            sum += vec[dimenz - (i + 1)][i];
        }
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int a_i = 0; a_i < n; a_i++) {
        for (int a_j = 0; a_j < n; a_j++) {
            cin >> a[a_i][a_j];
        }
    }
    //cout << diag_sum(n, FWD, a) << endl;
    //cout << diag_sum(n, REV, a) << endl;
    int abs_diff = abs(diag_sum(n, FWD, a) - diag_sum(n, REV, a));
    cout << abs_diff << endl;
    return 0;
}
