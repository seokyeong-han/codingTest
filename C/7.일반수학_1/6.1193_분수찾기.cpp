/* 
1193_분수찾기
https://www.acmicpc.net/problem/1193


*/

#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int layer = 1;
    while (n - layer > 0)
    {
        n -= layer;
        //cout << layer << ", " << n << "\n";
        layer++;
    }
    cout << layer << "\n";
    if (layer % 2 == 0) cout << n << "/" << layer - n + 1;
    else cout << layer - n + 1 << "/" << n;
    return 0;
}