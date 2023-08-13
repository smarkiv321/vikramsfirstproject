#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long maxTuition[n];
    for(int i = 0; i < n; i++) {
        cin >> tuition[i];
    }
    sort(tuition, tuition + n);
    long long maxMoney = 0, bestTuition = 0;
    int numCowsAttending = 0;
    for(int i = 0; i < n; i++) {
        long long highTuition = maxTuition[i]*numCowsAttending;
        if(highTuition > maxMoney) {
            maxMoney = highTuition;
            bestTuition = maxTuition[i];
        }

        numCowsAttending--;
    }

    cout << highTution << " " << bestTuition << endl; 



    return 0;
}
