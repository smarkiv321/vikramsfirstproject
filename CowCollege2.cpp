#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long maxTuitions[n];
    for(int i = 0; i < n; i++) {
        cin >> maxTuitions[i];
    }
    sort(maxTuitions, maxTuitions + n);
    long long totalTuition;
    long long mostOptimalTuition = 0;
    int count = n;
    int count2;
    for(int i = 0; i < n; i++) {
        totalTuition += maxTuitions[i] * count;
        if(totalTuition > mostOptimalTuition) {
            mostOptimalTuition = totalTuition;
            count2 = maxTuitions[i];
        }
        count--;
        totalTuition = 0;
    }

    cout << mostOptimalTuition << " " << count2;
    return 0;
}