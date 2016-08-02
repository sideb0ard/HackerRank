#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    double num_neg{0}, num_zero{0}, num_pos{0};
    for ( int i = 0; i < n; i++ ) {
        cin >> arr[i];
        if ( arr[i] > 0 )
            num_pos++;
        else if ( arr[i] < 0 )
            num_neg++;
        else
            num_zero++;
    }

    double perc_neg = num_neg / n;
    double perc_zero = num_zero / n;
    double perc_pos = num_pos / n;

    cout.precision(6);
    cout << fixed << perc_pos << endl;
    cout << fixed << perc_neg << endl;
    cout << fixed << perc_zero << endl;

    return 0;

}
