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

class kangaroo {
private:
    int m_start;
    int m_jumpsize;
    int m_position;
public:
    kangaroo(int start, int jumpsize) : m_start{start}, m_jumpsize{jumpsize}, m_position{start} {}
    void jump() {
        m_position += m_jumpsize;
    }
    int position() { return m_position; }
};

int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;

    vector<kangaroo> m_kangaroos;
    m_kangaroos.push_back(kangaroo{x1, v1});
    m_kangaroos.push_back(kangaroo{x2, v2});

    for ( int i = 0; i < 1000; i++ ) {
        m_kangaroos[0].jump();
        m_kangaroos[1].jump();
        if ( m_kangaroos[0].position() == m_kangaroos[1].position() )
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}
