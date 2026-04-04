#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x, y;
    cin >> x >> y;
    
    vector<vector<int>> n(x);
    
    for (int i = 0; i < x; i++){
        int k;
        cin >> k;
        n[i].resize(k);
        for (int j = 0; j < k; j++){
            cin >> n[i][j];
        }
    }
    for (int i = 0; i < y; i++){
        int p, q;
        cin >> p >> q;
        cout << n[p][q] << "\n";
    }
    return 0;
}
