#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int t;
    cin >> t;

    for (int a0 = 0; a0 < t; a0++) {
        int n;
        int k;
        cin >> n >> k;

        vector<int> a(n);

        for (int a_i = 0; a_i < n; a_i++) {
            cin >> a[a_i];
        }

        int arrived_on_time = 0;
        for (int a_i = 0; a_i < n; a_i++) {
            if (a[a_i] <= 0)
                if (++arrived_on_time >= k) {
                    cout << "NO\n";
                    break;
                }
        }
        if (arrived_on_time < k)
            cout << "YES\n";
    }

    return 0;
}
