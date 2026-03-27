#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of activities: ";
    cin >> n;

    vector<pair<int,int>> v;

    cout << "Enter start and finish times:\n";
    for(int i = 0; i < n; i++) {
        int s, f;
        cin >> s >> f;
        v.push_back({f, s});
    }


    sort(v.begin(), v.end());

    cout << "Selected activities:\n";

    int count = 1;
    int lastFinish = v[0].first;

    cout << v[0].second << " " << v[0].first << endl;

    for(int i = 1; i < n; i++) {
        if(v[i].second >= lastFinish) {
            cout << v[i].second << " " << v[i].first << endl;
            lastFinish = v[i].first;
            count++;
        }
    }

    cout << "Total = " << count;

    return 0;
}
