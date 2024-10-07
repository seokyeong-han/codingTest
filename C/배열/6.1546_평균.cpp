/* 
1546_평군
https://www.acmicpc.net/problem/1546

ex)

*/
#include <bits/stdc++.h>
using namespace std;

int n,m;
double num;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> m;
        arr[i] = m;
    }
    
    int maxValue = arr[0];
    
    for(int i=0; i<n; i++){//최댓값 
        if(arr[i] > maxValue)maxValue = arr[i];
    }

    for(int i=0; i<n; i++){
        num += arr[i];
    }
    cout << ((num/maxValue)*100)/n;

   return 0;
}
