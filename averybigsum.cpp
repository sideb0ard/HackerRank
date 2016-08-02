#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
       
    long long total = 0;
    for (int arr_i = 0; arr_i < n; arr_i++) {
        cin >> arr[arr_i];
        total += arr[arr_i];
    }

    cout << total << endl;
    return 0;
}
