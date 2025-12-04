#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    string name;
    cin >> n >> m;

    vector<string> people;

    for (int i=0 ; i<n+m ; i++) {
        cin >> name;
        people.push_back(name);
    }

    sort(people.begin(), people.end());

    vector<string> result;

    for (int i=0 ; i<people.size() ; ) {
        int j = i+1;
        if (j < people.size() && people[j] == people[i]) {
            result.push_back(people[i]);
            i += 2;
        } else i++;
    }

    cout << result.size() << "\n";
    for (auto &s : result) cout << s << "\n";

    return 0;
}