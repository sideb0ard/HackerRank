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

    for ( int i = 1 ; i <= n ; i++) {
        string out = std::string(n-i, ' ') + std::string(i, '#') + "\n";
        cout << out;
    }
        
    return 0;
}
