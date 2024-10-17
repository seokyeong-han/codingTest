#include <bits/stdc++.h>
using namespace std;
string s[5],a[15][5];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i=0; i<5; i++){
        cin >> s[i];
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<s[i].size(); j++){
            a[j][i] = s[i][j];
        }
    }

    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if(a[i][j] != ""){
                cout << a[i][j];
            }
        }
    }
   return 0;
}