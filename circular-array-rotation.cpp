#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector<int> circular_rotate(vector<int> nums, int rotate_num)
{
    int vec_sz = nums.size();
    vector<int> rotated;
    for ( int i =0; i < vec_sz; i++ ) {
        int tmp_rotn = vec_sz - rotate_num;
        while ( tmp_rotn < 0 )
            tmp_rotn += vec_sz;
        int thenum = nums[(i + tmp_rotn) % vec_sz];
        rotated.push_back(thenum);
    }
    for ( int i = 0; i < rotated.size(); i++ )
        cout << rotated[i] << endl;
    return rotated;
}

int main()
{
    int n{0}, k{0}, q{0};
    cin >> n >> k >> q;
    vector<int> nums(n);
    for (int i =0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> qs(q);
    for (int i = 0; i < q; i++) {
        cin >> qs[i];
    }

    vector<int> rotated_vec = circular_rotate(nums, k);

    for (auto i : qs) cout << rotated_vec[i] << endl;

    return 0;
}
