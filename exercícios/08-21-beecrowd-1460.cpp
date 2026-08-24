#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    while(1) {
        cin >> m >> n;

        if(m == 0 && n == 0) {
            break;
        }

        vector<vector<int>> h(n, vector<int> (m));
    
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> h[i][j];
            }
        }
    
        int q;
        cin >> q;
    
        vector<vector<int>> v(q, vector<int> (2));
    
        for(int i=0; i<q; i++) {
            cin >> v[i][0] >> v[i][1];
        }

        for(int i=0; i<q; i++) {
            int r = 0;

            for(int j=0; j<n; j++) {
                for(int k=0; k<m; k++) {

                    for(int l=0; l<n; l++) {
                        if(
                            h[j][l] >= v[i][0] &&
                            h[j][l] <= v[i][1]
                        ) {
                            continue;
                        }
                    }
                }
            }
        }
        cout << "-\n";
    }
}