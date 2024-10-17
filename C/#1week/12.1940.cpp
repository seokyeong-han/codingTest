// 주몽
// 문제 : 

// n : 값옷 고유 번호 갯수
// m : 값옷 만드는데 필요 갯수
#include <bits/stdc++.h>
using namespace std;
int n,m,a[15001],cnt;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> a[i];
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] + a[j] == m){
                cnt++;
            }
        }

    }

    cout << cnt<< "\n";
    return 0;
}