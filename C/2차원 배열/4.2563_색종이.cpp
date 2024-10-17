/* 
2563_색종이
https://www.acmicpc.net/problem/2563


*/

#include <bits/stdc++.h>
using namespace std;
int n,a[101][101],x,y;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        for(int j=x; j<x+10; j++){
            for(int z=y; z<y+10; z++){
                if(a[j][z]){continue;}
                a[j][z]++;
                sum ++;
                
            }
        }
    }
    cout << sum ;

   return 0;
}
