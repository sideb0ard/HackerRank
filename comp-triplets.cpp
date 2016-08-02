#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int a0, a1, a2;
    cin >> a0 >> a1 >> a2;
    vector<int> aliscores{a0, a1, a2};
     
    int b0, b1, b2;
    cin >> b0 >> b1 >> b2;
    vector<int> bobscores{b0, b1, b2};

    int alicomp_score = 0;
    int bobcomp_score = 0;

    for ( int i = 0; i < 3; i++ ) {
        if ( aliscores[i] > bobscores[i] ) {
            //cout << "Ali is higher!\n";
            alicomp_score++;
        } else if ( bobscores[i] > aliscores[i] ) {
            //cout << "Bob is higher!\n";
            bobcomp_score++;
        }
    }

    cout << alicomp_score << " " << bobcomp_score << endl;

    return 0;
}
