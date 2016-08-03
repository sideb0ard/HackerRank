#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string time;
    cin >> time;
    stringstream ss(time);

    vector<string> bits;
    string tok;
    while (getline(ss, tok, ':')) {
        bits.push_back(tok);
    }

    string hour = bits[0];
    string mins = bits[1];
    string secs_n_drugs = bits[2];
    string secs = secs_n_drugs.substr(0,2);

    if (secs_n_drugs.substr(2,2) == "PM") {
        if ( hour != "12" ) 
            hour = to_string(stoi(hour, nullptr, 10) + 12);
    }
    else if (hour == "12")
        hour = "00";

    cout << hour << ":" << mins << ":" << secs << endl;
    return 0;
}
