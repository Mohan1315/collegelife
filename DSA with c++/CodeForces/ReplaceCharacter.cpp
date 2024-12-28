#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;

        map<char, int> m;

        for (char c : s)
        {
            m[c]++;
        }

        vector<pair<int, char>> v;
        for (auto &x : m)
        {
            v.push_back({x.second, x.first});
        }
        sort(v.begin(), v.end());

        s[s.find(v[0].second)] = v.back().second;

        cout<<s<< endl;
    }
}